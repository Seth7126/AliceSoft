// 函数: sub_4d7760
// 地址: 0x4d7760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73444f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t arg_4
uint32_t edi = arg_4
char* edx = *(edi + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(edi + 8))
label_4d78df:
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
int32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(edi + 4) = &edx[4]

if (ebx_7 s> 0)
    do
        char* ecx = *(edi + 4)
        arg_4 = 0
        
        if (&ecx[4] u> *(edi + 8))
            goto label_4d78df
        
        uint32_t edx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
        *(edi + 4) = &ecx[4]
        arg_4 = edx_7
        void** eax_9 = arg1[0x14]
        void** esi_2 = eax_9
        void** ecx_1 = eax_9[1]
        
        while (*(ecx_1 + 0xd) == 0)
            if (ecx_1[4] s>= edx_7)
                esi_2 = ecx_1
                ecx_1 = *ecx_1
            else
                ecx_1 = ecx_1[2]
        
        if (esi_2 == eax_9 || edx_7 s< esi_2[4])
            esi_2 = eax_9
        
        if (esi_2 != arg1[0x14])
            goto label_4d78df
        
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataSound::VTable**
             eax_10 = sub_6e810c(0x20)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatKeyDataSound::VTable**
             var_1c_1 = eax_10
        int32_t var_8_1 = 0
        eax_10[1] = 1
        *eax_10 = &partsengine::CFlatKeyDataSound::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
        eax_10[7] = 0xf
        eax_10[6] = 0
        int32_t* eax_11
        
        if (eax_10[7] u< 0x10)
            eax_11 = &eax_10[2]
        else
            eax_11 = eax_10[2]
        
        *eax_11 = 0
        sub_403490(&eax_10[2], 0x75d08e, nullptr)
        int32_t var_8_2 = 0xffffffff
        void* var_24
        sub_42ebc0(&arg1[0x14], &var_24, &arg_4)
        *(var_24 + 0x14) = eax_10
        result = result_1 + 1
        result_1 = result
    while (result s< ebx_7)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
