// 函数: sub_62ca50
// 地址: 0x62ca50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg2
char* esi = arg3
int32_t var_8 = *edx
int32_t result = 0
void* var_c = arg1
int32_t var_4 = edx[1]

if (arg5 != 0)
    while (esi != arg4)
        void* eax_5 = __Mbrtowc(&arg2, esi, arg4 - esi, &var_8, arg1 + 8)
        void* ecx = eax_5
        
        if (ecx == 0xfffffffe)
            break
        
        if (ecx == 0xffffffff)
            break
        
        if (ecx == 0 && arg2.w == eax_5.w)
            char* eax_6 = esi
            
            do
                ecx.b = *eax_6
                eax_6 = &eax_6[1]
            while (ecx.b != 0)
            
            ecx = eax_6 - &eax_6[1] + 1
        
        void* eax_8 = nullptr
        
        if (ecx != 0xfffffffd)
            eax_8 = ecx
        
        arg1 = var_c
        result += 1
        esi += eax_8
        
        if (result u>= arg5)
            break

return result
