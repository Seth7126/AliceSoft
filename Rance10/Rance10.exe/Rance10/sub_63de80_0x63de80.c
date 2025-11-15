// 函数: sub_63de80
// 地址: 0x63de80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg5
void* edi = data_7fcbc8
int32_t esi = int.d(sub_4a78b0(*(ebx + 0x1c)))
int32_t eax = int.d(sub_4a78b0(*(ebx + 0x20)))

if (esi s> eax)
    eax = esi

int32_t eax_1 = eax * 2
HDC ecx_1 = arg4 - eax_1
HWND ebp_1 = arg3 - eax_1

if (sub_63dfe0(edi, ebp_1, ecx_1) != 0 && sub_63e140(edi) != 0
        && sub_63fd10(edi + 0x50, ebp_1, ecx_1, int.d(sub_4a78b0(*(ebx + 0x1c)))) != 0)
    int32_t eax_6 = int.d(sub_4a78b0(*(ebx + 0x1c)))
    void var_28
    char eax_8
    
    if (eax_6 s> 0)
        int32_t var_20_2 = *(ebx + 0x1c)
        eax_8 = sub_63fdf0(edi + 0x50, edi + 0xc, var_28)
    
    if ((eax_6 s<= 0 || eax_8 != 0)
            && sub_63fd10(edi + 0x98, ebp_1, ecx_1, int.d(sub_4a78b0(*(ebx + 0x20)))) != 0)
        int32_t eax_11 = int.d(sub_4a78b0(*(ebx + 0x20)))
        char eax_13
        
        if (eax_11 s> 0)
            int32_t var_20_4 = *(ebx + 0x20)
            eax_13 = sub_63fdf0(edi + 0x98, edi + 0xc, var_28)
        
        if (eax_11 s<= 0 || eax_13 != 0)
            int32_t* result
            int32_t edx_1
            result, edx_1 = (*(**(edi + 4) + 8))(arg3, arg4, 0x20)
            
            if (result != 0)
                if (sub_63e250(result, edx_1, edi, result, ebx, arg2, arg1) != 0)
                    return result
                
                (*(*result + 4))()

return 0
