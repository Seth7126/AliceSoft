// 函数: sub_649d50
// 地址: 0x649d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* ecx = *(arg1 + 0x30)
void* eax

if (ecx != 0)
    eax = (*(*ecx + 0x18))()
    var_4 = eax
    
    if (eax != 0)
        sub_6491b0(eax, *(arg1 + 4), &var_4, *(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x10), 0xffffffff)
        int32_t* ecx_2 = *(arg1 + 0x30)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0 && sub_649770(arg1, arg5).b != 0)
            int32_t* eax_4
            int32_t* edi
            
            if (*(arg1 + 0x44) != 0)
                eax_4 = arg4
                edi = arg3
            else
                eax_4 = arg3
                edi = arg4
            
            char eax_5 = sub_644e10(arg1, arg2, eax_4)
            
            if (eax_5 != 0)
                return sub_644d80(arg1, arg2, edi) != 0
            
            return eax_5

eax.b = 0
return eax
