// 函数: sub_555e00
// 地址: 0x555e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ad30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    ebx = arg3
int32_t __saved_ebp
struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable** 
    eax_4 = (*(**(arg1 + (ebx << 2) + 0x7c) + 8))(__security_cookie ^ &__saved_ebp)

if (eax_4 != arg2)
    (*(**(arg1 + (ebx << 2) + 0x7c) + 4))()
    struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable*
        * eax_7
    
    if (arg2 - 0x11 u> 0xb)
        eax_7 = sub_6e810c(0xb0)
        arg3 = eax_7
        int32_t var_8_11 = 0xa
        eax_4 = sub_547660(eax_7)
        *(arg1 + (ebx << 2) + 0x7c) = eax_4
    else
        switch (arg2)
            case 0x11
                eax_7 = sub_6e810c(0xb0)
                arg3 = eax_7
                int32_t var_8_1 = 0
                eax_4 = sub_547660(eax_7)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x12
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_8 = sub_6e810c(0x64)
                arg3 = eax_8
                int32_t var_8_2 = 1
                eax_4 = sub_551390(eax_8)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x13
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_9 = sub_6e810c(0xf4)
                arg3 = eax_9
                eax_4 = sub_55c620(eax_9)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x14
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_10 = sub_6e810c(0xb8)
                arg3 = eax_10
                int32_t var_8_3 = 2
                eax_4 = sub_54c540(eax_10)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x15
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_11 = sub_6e810c(0xb8)
                arg3 = eax_11
                int32_t var_8_4 = 3
                eax_4 = sub_5617f0(eax_11)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x16
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_12 = sub_6e810c(0x2f8)
                arg3 = eax_12
                int32_t var_8_5 = 4
                eax_4 = sub_552820(eax_12)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x17
                eax_4 = sub_6e810c(0x48)
                arg3 = eax_4
                eax_4[1] = 1
                *eax_4 = &partsengine::CRectangleDetectionSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
                __builtin_memset(&eax_4[2], 0, 0x20)
                eax_4[0xb] = &common::CPoint::`vftable'
                eax_4[0xc] = 0
                eax_4[0xd] = 0
                eax_4[0xe] = &common::CSize::`vftable'
                eax_4[0xf] = 0
                eax_4[0x10] = 0
                eax_4[0xa] = &common::CRect::`vftable'
                eax_4[0x11].b = 1
                __builtin_memset(&eax_4[2], 0, 0x20)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x18
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_13 = sub_6e810c(0xa8)
                arg3 = eax_13
                int32_t var_8_6 = 5
                eax_4 = sub_548b30(eax_13, *(arg1 + 0x94))
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x19
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_14 = sub_6e810c(0x54)
                arg3 = eax_14
                int32_t var_8_7 = 6
                eax_4 = sub_545e60(eax_14)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x1a
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CFlatSprite::VTable
                    ** eax_15 = sub_6e810c(0x8c)
                arg3 = eax_15
                int32_t var_8_8 = 7
                eax_4 = sub_4dbaf0(eax_15, arg1, *(arg1 + 0x8c), *(arg1 + 0x90))
                *(arg1 + (ebx << 2) + 0x7c) = eax_4
            case 0x1b
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_16 = sub_6e810c(0x80)
                arg3 = eax_16
                int32_t var_8_9 = 8
                int32_t ecx_10 = *(arg1 + 8)
                eax_16[1] = 1
                eax_16[2] = ecx_10
                *eax_16 = &partsengine::C3DLayerSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
                int32_t* eax_17 = sub_54d5a0(&eax_16[3])
                eax_16[0x1e].b = 1
                eax_16[0x1f] = 0xffffffff
                *(arg1 + (ebx << 2) + 0x7c) = eax_16
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_17
            case 0x1c
                struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CMovieSprite::VTable
                    ** eax_18 = sub_6e810c(0xb0)
                arg3 = eax_18
                int32_t var_8_10 = 9
                eax_4 = sub_523270(eax_18)
                *(arg1 + (ebx << 2) + 0x7c) = eax_4

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
