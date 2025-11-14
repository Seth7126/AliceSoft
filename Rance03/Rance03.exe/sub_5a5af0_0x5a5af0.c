// 函数: sub_5a5af0
// 地址: 0x5a5af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c89d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_5c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = (*(esi_1 + 0x50))[arg1]
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* edx = (*(ecx + 0x1c))[arg2]
            
            if (edx != 0)
                int32_t var_c_1 = 0
                struct sealengine::CBoneCollisionShape::VTable* var_50
                sub_52c030(edx + 0xf8, sub_52b520(&var_50))
                var_50 = &sealengine::CBoneCollisionShape::`vftable'
                int32_t var_24
                
                if (var_24 != 0)
                    j__free(var_24)
                
                int32_t eax_9
                eax_9.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
