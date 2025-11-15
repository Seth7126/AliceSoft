// 函数: sub_48d300
// 地址: 0x48d300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax_3 = arg2
int32_t ebx = arg3
int32_t esi_2 = (ebx - eax_3) s>> 2
void* ebp = *arg1
int32_t edx_2 = (arg1[2] - ebp) s>> 2

if (edx_2 u< esi_2)
    int32_t ebx_1 = 0
    uint32_t eax_1 = edx_2 u>> 1
    
    if (0x3fffffff - eax_1 u>= edx_2)
        ebx_1 = eax_1 + edx_2
    
    if (ebx_1 u< esi_2)
        ebx_1 = esi_2
    
    if (ebp != 0)
        sub_403160(ebp, edx_2, 4)
        *arg1 = 0
        arg1[1] = 0
        arg1[2] = 0
    
    sub_4224e0(arg1, ebx_1)
    ebx = arg3
    eax_3 = arg2

char* esi_3 = *arg1
void* ebx_2 = ebx - eax_3
sub_6feca0(esi_3, eax_3, ebx_2)
void* result = ebx_2 + esi_3
arg1[1] = result
return result
