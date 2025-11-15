// 函数: sub_5a9420
// 地址: 0x5a9420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x6c)
int32_t esi = *(arg1 + 0x68)
struct kiwi::CSoundChannel::VTable** result = __Smtx_unlock_shared(arg1 + 0x6c)

if (esi != 0 && arg3 != 0)
    bool cond:0_1 = arg2 f> *(arg1 + 0x70)
    *(arg1 + 0x70) = arg2
    
    if (not(cond:0_1))
        sub_487ad0(4, 0xc8, 1)
        __Smtx_lock_shared(arg1 + 0x6c)
        int32_t* edi_1 = *(arg1 + 0x68)
        __Smtx_unlock_shared(arg1 + 0x6c)
        __Smtx_lock_shared(arg1 + 0x6c)
        int32_t* esi_1 = *(arg1 + 0x68)
        __Smtx_unlock_shared(arg1 + 0x6c)
        int128_t* eax_2 = (*(*edi_1 + 0x14))()
        result = (*(*esi_1 + 0x18))()
        struct kiwi::CSoundChannel::VTable** ecx_3 = *(data_7fcb6c + 0x934)
        
        if (ecx_3 != 0)
            return sub_488090(ecx_3, 4, result, eax_2, int.d(arg2 * 33.3333321f))

return result
