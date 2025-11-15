// 函数: sub_630d40
// 地址: 0x630d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *arg1

if (eax != arg2)
    if (eax != 0)
        _free(eax)
    
    *arg1 = 0
    
    if (arg2 != 0)
        char* esi = arg2
        
        if (*arg2 != 0)
            do
                esi = &esi[1]
            while (*esi != 0)
        
        void* var_10 = esi - arg2 + 1
        char* eax_1 = sub_705e22()
        *arg1 = eax_1
        
        if (eax_1 != 0)
            sub_700660(eax_1, arg2, esi - arg2 + 1)

return arg1
