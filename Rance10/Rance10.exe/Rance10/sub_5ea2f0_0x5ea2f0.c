// 函数: sub_5ea2f0
// 地址: 0x5ea2f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7419f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg3 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg3 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg3 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0)
            struct math3d::CLineSegment::VTable* const var_3c = &math3d::CLineSegment::`vftable'
            int128_t var_38
            __builtin_memset(&var_38, 0, 0x18)
            int32_t var_8_1 = 0
            int32_t var_1c_1 = arg2
            int32_t var_18_1 = arg4
            struct common::CPoint::VTable* const var_20 = &common::CPoint::`vftable'
            
            if (sub_5c6210(edi_3 + 0x10, &var_20, &var_3c).b != 0)
                float var_7c[0x4][0x4]
                sub_56bca0(edi_3 + 0x2c, &var_7c)
                var_20 = nullptr
                int32_t var_1c_2 = 0
                int32_t var_18_2 = 0
                
                if (sub_5645d0(edi_3 + 0x1ac, &var_3c, &var_7c, &var_20).b != 0)
                    *arg5 = var_20
                    *arg6 = var_1c_2
                    *arg7 = var_18_2
                    int32_t* eax_10
                    eax_10.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_10

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
