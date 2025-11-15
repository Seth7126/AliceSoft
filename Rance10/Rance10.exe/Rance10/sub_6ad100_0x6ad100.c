// 函数: sub_6ad100
// 地址: 0x6ad100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_40c
int32_t eax_1 = __security_cookie ^ &var_40c
var_40c = arg7

if (*(arg3 + 0x80) != arg2)
    *(arg3 + 0x9c) = "zstream unclaimed"
    @__security_check_cookie@4(eax_1 ^ &var_40c)
    return 0xfffffffe

int32_t ebx = *arg7
*(arg3 + 0x88) = 0
*(arg3 + 0x94) = 0
int32_t edi = *arg5
*(arg3 + 0x84) = arg4

if (arg6 != 0)
    *(arg3 + 0x90) = arg6

do
    int32_t edi_1 = edi + *(arg3 + 0x88)
    int32_t eax_4 = 0xffffffff
    
    if (edi_1 u< 0xffffffff)
        eax_4 = edi_1
    
    int32_t ebx_1 = ebx + *(arg3 + 0x94)
    edi = edi_1 - eax_4
    *(arg3 + 0x88) = eax_4
    int32_t ecx_1 = 0xffffffff
    
    if (arg6 == 0)
        ecx_1 = 0x400
        void var_404
        *(arg3 + 0x90) = &var_404
    
    int32_t eax_5 = ebx_1
    
    if (ebx_1 u>= ecx_1)
        eax_5 = ecx_1
    
    ebx = ebx_1 - eax_5
    *(arg3 + 0x94) = eax_5
    arg2 = sub_6a08b0(arg3 + 0x84, (sbb.d(arg2, arg2, 0 u< ebx) & 0xfffffffc) + 4)
while (arg2 == 0)

if (arg6 == 0)
    *(arg3 + 0x90) = arg6

int32_t edi_2 = edi + *(arg3 + 0x88)

if (ebx != neg.d(*(arg3 + 0x94)))
    int32_t* eax_7 = var_40c
    *eax_7 -= ebx + *(arg3 + 0x94)

if (edi_2 != 0)
    *arg5 -= edi_2

sub_6a4ab0(arg3, arg2)
@__security_check_cookie@4(eax_1 ^ &var_40c)
return arg2
