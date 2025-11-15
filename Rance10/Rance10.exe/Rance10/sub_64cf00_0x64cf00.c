// 函数: sub_64cf00
// 地址: 0x64cf00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
void* result = *(arg1 + 0x18c)
int32_t ebp = *(arg1 + 0x1c)
int32_t ecx_3 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
int32_t edi = *(result + 8)
arg5 = ecx_3

if (not(cond:0))
    int32_t ebx_1 = arg4 << 2
    int32_t temp1_1
    
    do
        int32_t* eax_1 = arg2
        char* esi_1 = nullptr
        arg2 = &eax_1[1]
        result = *(ebx_1 + *arg3)
        ebx_1 += 4
        arg1 = result
        
        if (ebp != 0)
            result = *eax_1 + 1
            
            do
                uint32_t ecx_4 = zx.d(*(result + 1))
                result += 3
                char ebx_5 = ((*(edi + (ecx_4 << 2) + 0x800) + *(edi + (zx.d(*(result - 4)) << 2))
                    + *(edi + (zx.d(*(result - 3)) << 2) + 0x400)) s>> 0x10).b
                *(esi_1 + arg1) = ebx_5
                esi_1 = &esi_1[1]
            while (esi_1 u< ebp)
            
            ecx_3 = arg5
        
        temp1_1 = ecx_3
        ecx_3 -= 1
        arg5 = ecx_3
    while (temp1_1 - 1 s>= 0)

return result
