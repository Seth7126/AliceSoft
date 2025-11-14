// 函数: sub_505e80
// 地址: 0x505e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *(arg1 + 4)
int32_t ecx

if (eax_3 != 0)
    ecx = *(eax_3 + 8)
else
    ecx = 0xffffffff

void* esi = data_75d4cc
int32_t var_14 = ecx
int32_t* var_10
sub_42f3d0(esi + 0x2a0, &var_10, &var_14)
int32_t* eax_4 = var_10

if (eax_4 != *(esi + 0x2a0))
    void* edi_1 = eax_4[5]
    
    if (edi_1 != 0)
        int32_t* edi_2 = *(edi_1 + 0xd8)
        
        if (edi_2 != 0)
            eax_4 = sub_506410(arg1, edi_2)
            
            if (eax_4 != 0)
                int32_t var_2c_1 = (*(*edi_2 + 0x10))((*(*edi_2 + 0x14))(eax_2))
                int32_t* var_38_1 = edi_2
                sub_503f80(arg1 + 0x14, eax_4)
                var_10 = &partsengine::CSpriteEngineWrapper::`vftable'
                int32_t var_4 = 0
                void* edx_1 = *(arg1 + 4)
                int32_t edx_2
                
                if (edx_1 != 0)
                    edx_2 = *(edx_1 + 8)
                else
                    edx_2 = 0xffffffff
                
                int32_t var_28_3 = edx_2
                void* eax_9 = sub_44e5c0(data_75d4cc + 0x288)
                
                if (eax_9 != 0)
                    sub_44eaf0(eax_9, eax_4)
                    eax_9.b = 1
                else
                    eax_9.b = 0
                
                int32_t var_4_1 = 0xffffffff
                eax_9.b = eax_9.b == 0
                int32_t eax_10 = *eax_4
                
                if (eax_9.b == 0)
                    (*(eax_10 + 4))()
                    int32_t eax_11
                    eax_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_11
                
                (*(eax_10 + 4))()

eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
