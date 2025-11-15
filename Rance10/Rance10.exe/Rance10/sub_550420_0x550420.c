// 函数: sub_550420
// 地址: 0x550420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t* eax

if (*esi != 0)
    int32_t arg_4
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    sub_54ee10(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
    int32_t var_24_2 = arg_10
    
    if (sub_54ed10(esi, arg_4, arg_8, arg_c).b == 0)
        int32_t* eax_1 = *esi
        
        if (eax_1 != 0)
            eax_1 = eax_1[0x46]
        
        eax = sub_54e8e0(esi, eax_1)
        
        if (eax != 0)
            int32_t eax_2 = arg_8
            int32_t eax_3 = arg_4
            int32_t* eax_4 = sub_54e9a0(esi)
            int32_t* ecx_3 = esi[4]
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 0x54))(eax_4, eax_3, eax_2, eax, eax_3, eax_2, arg_c, arg_10, arg2)
            
            (*(*eax + 4))()
            int32_t eax_7
            eax_7.b = 1
            return eax_7

eax.b = 0
return eax
