// 函数: sub_620a00
// 地址: 0x620a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx_1 = arg4 - arg3

if (arg4 == arg3)
    return 

char* ebp_1 = arg1[1]
int32_t esi_1 = arg1[2]

if (esi_1 - ebp_1 u< ebx_1)
    int32_t ecx_1 = *arg1
    
    if (ecx_1 - ebp_1 - 1 u< ebx_1)
        sub_6d0927("vector<T> too long")
        noreturn
    
    int32_t esi_2 = esi_1 - ecx_1
    int32_t edx_1 = 0
    uint32_t eax_7 = esi_2 u>> 1
    int32_t ebp_3 = ebp_1 - ecx_1 + ebx_1
    
    if (not.d(eax_7) u>= esi_2)
        edx_1 = eax_7 + esi_2
    
    if (edx_1 u>= ebp_3)
        ebp_3 = edx_1
    
    char* eax_9 = sub_4039d0(ebp_3)
    char* ecx_5 = *arg1
    void* esi_4 = arg2 - ecx_5
    sub_6feca0(eax_9, ecx_5, esi_4)
    char* esi_5 = esi_4 + eax_9
    sub_6feca0(esi_5, arg3, ebx_1)
    sub_6feca0(ebx_1 + esi_5, arg2, arg1[1] - arg2)
    void* ecx_8 = *arg1
    void* ebx_2 = ebx_1 + arg1[1] - ecx_8
    
    if (ecx_8 != 0)
        sub_403160(ecx_8, arg1[2] - ecx_8, 1)
    
    arg1[2] = &eax_9[ebp_3]
    arg1[1] = eax_9 + ebx_2
    *arg1 = eax_9
    return 

sub_6feca0(ebp_1, arg3, ebx_1)
char* edx_2 = arg1[1]
void* eax = edx_2 + ebx_1

if (arg2 != edx_2 && edx_2 != eax)
    int32_t var_14_4 = 0
    sub_620b10(eax.b, edx_2, arg2, eax)

arg1[1] += ebx_1
