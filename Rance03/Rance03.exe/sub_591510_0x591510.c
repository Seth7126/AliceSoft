// 函数: sub_591510
// 地址: 0x591510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct thread::CCriticalLock::VTable* const var_18 = &thread::CCriticalLock::`vftable'
char var_14 = 1
int32_t var_50_1 = EnterCriticalSection(*(arg1 + 8) + 4)
int32_t var_4 = 0
int32_t* var_20
sub_591750(&var_20, arg1 + 0x14)
var_4.b = 1
sub_418220(*(*(arg1 + 0x14) + 4))
void* eax_7 = *(arg1 + 0x14)
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *(arg1 + 0x14)
*eax_8 = eax_8
void* eax_9 = *(arg1 + 0x14)
*(eax_9 + 8) = eax_9
int32_t* eax_10 = var_20
*(arg1 + 0x18) = 0
int32_t* i = *eax_10
void var_24

if (i != eax_10)
    int32_t* ebp_1 = arg1 + 0xc
    int32_t* var_38_1 = ebp_1
    
    do
        int32_t* ebx_1 = &i[4]
        void** eax_11 = sub_417ed0(ebp_1, ebx_1)
        void** eax_12 = *ebp_1
        void*** edi_2
        void** var_28
        
        if (eax_11 == eax_12)
            var_28 = eax_12
            edi_2 = &var_28
        else
            void* edx_1 = &eax_11[4]
            int32_t ecx_4 = *(edx_1 + 0x10)
            
            if (eax_11[9] u>= 0x10)
                edx_1 = *edx_1
            
            int32_t ebp_2 = ebx_1[4]
            
            if (ebx_1[5] u>= 0x10)
                ebx_1 = *ebx_1
            
            int32_t eax_13 = ecx_4
            
            if (ebp_2 u< ecx_4)
                eax_13 = ebp_2
            
            int32_t eax_14 = sub_405190(eax_13, edx_1, ebx_1, eax_13)
            bool cond:3_1 = eax_14 s< 0
            
            if (eax_14 != 0)
                goto label_59160a
            
            if (ebp_2 u< ecx_4)
                ebp_1 = var_38_1
                var_28 = eax_12
                edi_2 = &var_28
            else
                eax_14.b = ebp_2 != ecx_4
                cond:3_1 = eax_14 s< 0
            label_59160a:
                ebp_1 = var_38_1
                
                if (cond:3_1)
                    var_28 = eax_12
                    edi_2 = &var_28
                else
                    void** var_2c = eax_11
                    edi_2 = &var_2c
        void** edi_3 = *edi_2
        
        if (edi_3 != *ebp_1)
            int32_t* ecx_7 = edi_3[0xa]
            
            if (ecx_7[4] == 1)
                (*(*ecx_7 + 4))(eax_2)
                sub_417fb0(ebp_1, &var_24, edi_3)
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != var_20)

LeaveCriticalSection(*(arg1 + 8) + 4)
int32_t** eax_19 = var_20
sub_417e10(&var_20, &var_24, *eax_19, eax_19)
int32_t result = j__free(var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return result
