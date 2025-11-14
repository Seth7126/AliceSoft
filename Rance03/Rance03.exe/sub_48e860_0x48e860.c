// 函数: sub_48e860
// 地址: 0x48e860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb18b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_14 = edi
uint32_t arg_4
uint32_t ebx = arg_4
char* edx = *(ebx + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(ebx + 8))
label_48e9d0:
    result.b = 0
else
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    int32_t ebp_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebx + 4) = &edx[4]
    
    if (ebp_7 s> 0)
        do
            char* ecx = *(ebx + 4)
            arg_4 = 0
            
            if (&ecx[4] u> *(ebx + 8))
                goto label_48e9d0
            
            uint32_t eax_7 = zx.d(*ecx)
            uint32_t esi_6 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8
            *(ebx + 4) = &ecx[4]
            uint32_t esi_7 = esi_6 | eax_7
            struct _EXCEPTION_REGISTRATION_RECORD* Handler_3 = *(edi + 0x50)
            arg_4 = esi_7
            EXCEPTION_ROUTINE* Handler_1 = Handler_3
            EXCEPTION_ROUTINE* Handler = Handler_3->Handler
            
            while (*(Handler + 0xd) == 0)
                if (*(Handler + 0x10) s>= esi_7)
                    Handler_1 = Handler
                    Handler = *Handler
                else
                    Handler = *(Handler + 8)
            
            if (Handler_1 == Handler_3 || esi_7 s< *(Handler_1 + 0x10))
                struct _EXCEPTION_REGISTRATION_RECORD* Handler_4 = Handler_3
                result = &Handler_4
            else
                EXCEPTION_ROUTINE* Handler_2 = Handler_1
                result = &Handler_2
            
            if (*result != Handler_3)
                goto label_48e9d0
            
            struct IInterface::partsengine::CFlatKeyDataSound::VTable** esi_8 = sub_69adc6(0x20)
            struct IInterface::partsengine::CFlatKeyDataSound::VTable** var_10_1 = esi_8
            int32_t var_4 = 0
            
            if (esi_8 == 0)
                esi_8 = nullptr
            else
                *esi_8 = &partsengine::CFlatKeyDataSound::`vftable'{for `IInterface'}
                esi_8[1] = 1
                esi_8[7] = 0xf
                esi_8[6] = 0
                esi_8[2].b = 0
                sub_402110(&esi_8[2], 0x6da21a, nullptr)
            
            edi = var_14
            int32_t var_4_1 = 0xffffffff
            *sub_42f350(edi + 0x50, &arg_4) = esi_8
            result = result_1 + 1
            result_1 = result
        while (result s< ebp_7)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
