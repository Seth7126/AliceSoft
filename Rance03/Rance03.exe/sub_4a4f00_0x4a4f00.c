// 函数: sub_4a4f00
// 地址: 0x4a4f00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
void* eax_6

if ((*(**(arg1 + 0x5c) + 0xc))(__security_cookie ^ &__saved_edi) != 0xa)
    int32_t* var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    eax_6 = (*(**(arg1 + 0x5c) + 0x48))(&var_18)
    int32_t* esi_1 = var_18
    
    if (esi_1 != var_14_1)
        do
            (*(**(*(*(*(*esi_1 + 4) + 0x34) + 0x28) + 4) + 0x44))(arg2)
            (*(**(*(*(*(*esi_1 + 4) + 0x34) + 0x28) + 8) + 0x44))(arg2)
            eax_6 = (*(**(*(*(*(*esi_1 + 4) + 0x34) + 0x28) + 0xc) + 0x44))(arg2)
            esi_1 = &esi_1[1]
        while (esi_1 != var_14_1)
        
        esi_1 = var_18
    
    if (esi_1 != 0)
        eax_6 = j__free(esi_1)
else
    eax_6 = *(*(arg1 + 0x5c) + 0x34)
    
    if (arg3 u<= 3)
        int32_t eax_9 = (*(**(*(eax_6 + 0x28) + (arg3 << 2)) + 0x44))(arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9

fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
