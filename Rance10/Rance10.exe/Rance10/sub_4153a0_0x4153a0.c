// 函数: sub_4153a0
// 地址: 0x4153a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* edx = arg4[5]
int32_t* esi = arg4[4]
*(arg1 + 0x78) = 0
int32_t edi = sub_415770(esi, arg2)

if (edi s>= 0)
    char arg_10
    
    if (arg_10 == 0)
    label_4153e9:
        int32_t* ebx = (*(*esi + 4))(edi)
        int32_t* eax_3
        
        if (ebx != 0)
            int32_t* ebp_1 = (*(*ebx + 0x18))()
            
            if (ebp_1 != 0)
                arg_10.d = arg3 << 2
                eax_3 = (*(*ebx + 0x14))()
                int32_t* ecx_5 = arg_10.d
                
                if (ecx_5 s< eax_3)
                    arg_10.d = *(ecx_5 + ebp_1)
                    return sub_415460(arg1, &arg_10, edi, arg3, edx, esi, 0)
        
        eax_3.b = 0
        return eax_3
    
    edi = (*(*esi + 0x38))(edi)
    
    if (edi s>= 0)
        goto label_4153e9

int32_t eax_1
eax_1.b = 0
return eax_1
