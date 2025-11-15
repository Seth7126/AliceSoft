// 函数: sub_404420
// 地址: 0x404420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_2 = arg1
char* eax = arg3
int32_t ebp = arg1[2]
char* esi = arg1[1]
int32_t edx = *arg1
int32_t ebx_2 = (eax - edx) s>> 2

if ((ebp - esi) s>> 2 u>= 1)
    if ((esi - eax) s>> 2 u>= 1)
        arg4 = *arg4
        sub_6feca0(esi, &esi[0xfffffffc], 4)
        arg1[1] = &esi[4]
        sub_6feca0(esi - (esi - arg3 - 4), arg3, esi - arg3 - 4)
        sub_404730(&arg4, arg3 + 4, arg3, &arg4)
        *arg2 = *arg1 + (ebx_2 << 2)
        return arg2
    
    arg4 = *arg4
    sub_6feca0(&eax[4], eax, esi - eax)
    int32_t* ecx_21 = arg1[1]
    void* var_18_3 = arg3
    int32_t* var_1c_3 = ecx_21
    int32_t eax_23 = (ecx_21 - arg3) s>> 2
    sub_404760(eax_23, 1 - eax_23, ecx_21, &arg4)
    arg1[1] += 4
    sub_404730(&arg4, arg1[1] - 4, arg3, &arg4)
    *arg2 = *arg1 + (ebx_2 << 2)
    return arg2

int32_t esi_2 = (esi - edx) s>> 2

if (0x3fffffff - esi_2 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t esi_3 = esi_2 + 1
int32_t ebp_2 = (ebp - edx) s>> 2
uint32_t eax_3 = ebp_2 u>> 1
int32_t ecx_4 = 0

if (0x3fffffff - eax_3 u>= ebp_2)
    ecx_4 = eax_3 + ebp_2

if (ecx_4 u>= esi_3)
    esi_3 = ecx_4

char* eax_5 = sub_4046d0(esi_3)
void* var_18_1 = arg3
int32_t ecx_7 = (arg3 - *arg1) s>> 2
int32_t var_1c = ecx_7
int32_t esi_4 = ecx_7 << 2
sub_404760(eax_5, 1, &eax_5[esi_4], arg4)
char* ecx_9 = *arg1
sub_6feca0(eax_5, ecx_9, arg3 - ecx_9)
sub_6feca0(esi_4 + 4 + eax_5, arg3, arg1[1] - arg3)
void* ecx_12 = *arg1
int32_t esi_7 = (arg1[1] - ecx_12) s>> 2

if (ecx_12 != 0)
    sub_403160(ecx_12, (arg1[2] - ecx_12) s>> 2, 4)

arg1[2] = &eax_5[esi_3 << 2]
arg1[1] = (esi_7 << 2) + 4 + eax_5
*arg1 = eax_5
*arg2 = &eax_5[ebx_2 << 2]
return arg2
