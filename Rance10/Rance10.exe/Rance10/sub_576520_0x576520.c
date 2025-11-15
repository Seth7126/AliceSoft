// 函数: sub_576520
// 地址: 0x576520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx_2 = (arg4 - arg3) s>> 2

if (ebx_2 == 0)
    return 

int32_t ebp_1 = arg1[2]
int32_t* esi_1 = arg1[1]
int32_t eax_3 = (ebp_1 - esi_1) s>> 2

if (eax_3 u< ebx_2)
    int32_t ecx_1 = *arg1
    int32_t esi_3 = (esi_1 - ecx_1) s>> 2
    
    if (0x3fffffff - esi_3 u< ebx_2)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t esi_4 = esi_3 + ebx_2
    int32_t ebp_3 = (ebp_1 - ecx_1) s>> 2
    int32_t ecx_2 = 0
    uint32_t eax_6 = ebp_3 u>> 1
    
    if (0x3fffffff - eax_6 u>= ebp_3)
        ecx_2 = eax_6 + ebp_3
    
    if (ecx_2 u>= esi_4)
        esi_4 = ecx_2
    
    char var_8
    var_8.d = esi_4
    char* eax_8 = sub_4046d0(esi_4)
    char* ecx_3 = *arg1
    void* esi_6 = arg2 - ecx_3
    void* eax_9 = esi_6 + eax_8
    int32_t var_24_2 = 0.d
    int32_t var_28_2 = sub_6feca0(eax_8, ecx_3, esi_6)
    sub_6feca0(sub_491470(eax_9, arg4, arg3, eax_9), arg2, arg1[1] - arg2)
    void* ecx_7 = *arg1
    int32_t ebx_3 = ebx_2 + ((arg1[1] - ecx_7) s>> 2)
    
    if (ecx_7 != 0)
        sub_403160(ecx_7, (arg1[2] - ecx_7) s>> 2, 4)
    
    arg1[2] = &eax_8[var_8.d << 2]
    arg1[1] = &eax_8[ebx_3 << 2]
    *arg1 = eax_8
    return 

int32_t var_20_3 = arg3
int32_t var_24_4 = 0.d
int32_t var_28_4 = arg3
sub_491470(eax_3, arg4, arg3, esi_1)
int32_t* edx_4 = arg1[1]
void* eax = &edx_4[ebx_2]

if (arg2 != edx_4 && edx_4 != eax)
    int32_t var_20_4 = 0.d
    sub_503820(eax, edx_4, arg2, eax)

arg1[1] += ebx_2 << 2
