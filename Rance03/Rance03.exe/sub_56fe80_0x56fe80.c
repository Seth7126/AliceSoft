// 函数: sub_56fe80
// 地址: 0x56fe80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t eax_2 = (arg4 i- arg3) s>> 2
long double x87_r0
long double x87_r1
long double x87_r2
long double x87_r3
long double x87_r4
long double x87_r5

if (eax_2 s<= 0x28)
    int32_t __saved_ebx = arg5
    return sub_570170(eax_2, arg2, arg3, x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, arg4)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
int32_t var_18 = arg5
int32_t edi = eax_6 << 2
float eax_7 = &arg3[eax_6 * 2]
void* ebp = &arg3[eax_6]
sub_570170(eax_7, ebp, arg3, x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, eax_7)
int32_t var_20 = arg5
float eax_8 = &arg2[eax_6]
long double x87_r6
long double x87_r7
sub_570170(eax_8, arg2, arg2 - edi, x87_r6, x87_r7, x87_r0, x87_r1, x87_r2, x87_r3, eax_8)
int32_t var_28 = arg5
float esi_2 = arg4 i- edi
int32_t* eax_10 = arg4 i- (eax_6 << 3)
int32_t var_30 = arg5
return sub_570170(
    sub_570170(eax_10, esi_2, eax_10, x87_r4, x87_r5, x87_r6, x87_r7, x87_r0, x87_r1, arg4), arg2, 
    ebp, x87_r2, x87_r3, x87_r4, x87_r5, x87_r6, x87_r7, esi_2)
