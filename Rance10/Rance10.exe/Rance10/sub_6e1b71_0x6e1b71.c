// 函数: sub_6e1b71
// 地址: 0x6e1b71
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
int32_t var_10 = *arg2
char* edi = arg3
int32_t var_c = arg2[1]

if (arg5 u> 0)
    while (edi != arg4)
        int16_t var_8
        void* eax_5 = __Mbrtowc(&var_8, edi, arg4 - edi, &var_10, arg1 + 8)
        void* ecx = eax_5
        
        if (ecx == 0xfffffffe)
            break
        
        if (ecx == 0xffffffff)
            break
        
        if (ecx == 0 && var_8 == eax_5.w)
            char* ecx_1 = edi
            
            do
                eax_5.b = *ecx_1
                ecx_1 = &ecx_1[1]
            while (eax_5.b != 0)
            
            ecx = ecx_1 - &ecx_1[1] + 1
        
        int32_t eax_7 = neg.d(ecx + 3)
        edi += sbb.d(eax_7, eax_7, ecx != 0xfffffffd) & ecx
        result += 1
        
        if (result u>= arg5)
            break

return result
