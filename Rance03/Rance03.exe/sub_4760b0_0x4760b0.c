// 函数: sub_4760b0
// 地址: 0x4760b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 1
struct kiwi::CSoundChannel::VTable** esi = sub_46ef10(arg1 + 0x78, arg2)

if (esi != 0 && sub_4772d0(esi, arg3, arg4).b != 0)
    int32_t eax_1 = arg5
    
    if (eax_1 s< 0)
        int32_t eax_2
        eax_2.b = esi[2].b == 0
        eax_1 = eax_2 + 1
    
    esi[3] = eax_1
    long double x87_r0
    int32_t xmm0 = sub_473f80(*(arg1 + 0xb8), x87_r0, esi)
    int32_t* ecx_3 = esi[1]
    int32_t* var_14 = ecx_3
    (*(*ecx_3 + 0x44))(0, xmm0, 0, 0xffffffff)
    int32_t eax_4
    eax_4.b = 1
    return eax_4

struct kiwi::CSoundChannel::VTable** eax
eax.b = 0
return eax
