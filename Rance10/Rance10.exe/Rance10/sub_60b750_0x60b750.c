// 函数: sub_60b750
// 地址: 0x60b750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742dde
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = *(arg1 + 4)
int32_t ebx = arg1[1].d

if (&edi[4] u<= ebx)
    uint32_t esi_7 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(arg1 + 4) = &edi[4]
    
    if (&edi[8] u<= ebx)
        uint32_t edi_7 =
            ((zx.d(edi[7]) << 8 | zx.d(edi[6])) << 8 | zx.d(edi[5])) << 8 | zx.d(edi[4])
        *(arg1 + 4) = &edi[8]
        
        if (&edi[8 + edi_7] u<= ebx)
            struct sys43vm::CZlibDecompressor::VTable* const var_18 =
                &sys43vm::CZlibDecompressor::`vftable'
            int32_t* var_14 = nullptr
            int32_t var_8_1 = 0
            
            if (sub_454990(&var_18).b != 0)
                sub_405950(arg2, esi_7)
                int32_t edx_1 = *arg2
                
                if (var_14 != 0)
                    arg1:3.b = (*(*var_14 + 8))(edx_1, arg2[1] - edx_1, *(arg1 + 4), edi_7).b
                else
                    arg1:3.b = var_14.b
            else
                arg1:3.b = 0
            
            int32_t var_8_2 = 1
            
            if (var_14 != 0)
                (*(*var_14 + 4))(eax_2)
            
            int64_t* eax_10
            eax_10.b = arg1:3.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
