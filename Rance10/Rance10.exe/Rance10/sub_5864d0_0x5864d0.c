// 函数: sub_5864d0
// 地址: 0x5864d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1[1]
int32_t edx_2 = (ebx - *arg1) s>> 3

if (edx_2 u> arg2)
    arg1[1] = ebx + ((arg2 - edx_2) << 3)
    return 

if (edx_2 u>= arg2)
    return 

int32_t ebp_1 = arg1[2]
int32_t ecx_1 = arg2 - edx_2

if ((ebp_1 - ebx) s>> 3 u< ecx_1)
    if (0x1fffffff - edx_2 u< ecx_1)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t edx_3 = edx_2 + ecx_1
    int32_t ebp_3 = (ebp_1 - *arg1) s>> 3
    int32_t ecx_2 = 0
    uint32_t eax_7 = ebp_3 u>> 1
    
    if (0x1fffffff - eax_7 u>= ebp_3)
        ecx_2 = eax_7 + ebp_3
    
    if (ecx_2 u>= edx_3)
        edx_3 = ecx_2
    
    sub_586ab0(arg1, edx_3)

int32_t* ecx_4 = arg1[1]
int32_t var_14_2 = arg2
int32_t* var_18_1 = ecx_4
sub_56a3a0(ecx_4, arg2 - ((ecx_4 - *arg1) s>> 3))
arg1[1] += (arg2 - ((arg1[1] - *arg1) s>> 3)) << 3
