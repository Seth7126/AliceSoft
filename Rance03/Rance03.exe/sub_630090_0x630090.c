// 函数: sub_630090
// 地址: 0x630090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_40c
int32_t eax_1 = __security_cookie ^ &var_40c
var_40c = arg4
int32_t esi = *arg4
*(arg3 + 0x84) = arg2
int32_t ebx = *arg6
void* ecx_1 = arg3 + 0x84
*(arg3 + 0x88) = 0
*(arg3 + 0x94) = 0

if (arg5 != 0)
    *(arg3 + 0x90) = arg5

do
    int32_t esi_1 = esi + *(arg3 + 0x88)
    int32_t eax_3 = 0xffffffff
    
    if (esi_1 u< 0xffffffff)
        eax_3 = esi_1
    
    int32_t ebx_1 = ebx + *(arg3 + 0x94)
    esi = esi_1 - eax_3
    *(arg3 + 0x88) = eax_3
    int32_t eax_4 = 0xffffffff
    
    if (arg5 == 0)
        void var_404
        *(arg3 + 0x90) = &var_404
        eax_4 = 0x400
    
    if (ebx_1 u< eax_4)
        eax_4 = ebx_1
    
    ebx = ebx_1 - eax_4
    *(arg3 + 0x94) = eax_4
    arg2 = sub_623b50(ecx_1, (sbb.d(arg2, arg2, 0 u< ebx) & 0xfffffffc) + 4)
    ecx_1 = arg3 + 0x84
while (arg2 == 0)

if (arg5 == 0)
    *(arg3 + 0x90) = arg5

int32_t esi_2 = esi + *(arg3 + 0x88)

if (ebx != neg.d(*(arg3 + 0x94)))
    *arg6 -= ebx + *(arg3 + 0x94)

if (esi_2 != 0)
    int32_t* eax_7 = var_40c
    *eax_7 -= esi_2

sub_627c20(arg3, arg2)
sub_69a5bc(eax_1 ^ &var_40c)
return arg2
