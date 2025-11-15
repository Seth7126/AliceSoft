// 函数: sub_4a1000
// 地址: 0x4a1000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730ee8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t ExceptionRecord = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_2

if (arg2 != 0)
    eax_2 = sub_45e8a0(0x760e8c)
    
    if (eax_2 != 0)
        int32_t* eax_4 = (*eax_2)->__offset(0x8).d(arg2, 0)
        (*eax_2)->Handler(ExceptionRecord)
        
        if (eax_4 != 0)
            struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
            HANDLE hObject = 0xffffffff
            int32_t var_18 = 0
            int32_t var_14 = 0
            int32_t var_8_1 = 0
            bool cond:0 = sub_67ece0(&var_20, arg1) == 0
            int32_t eax_6 = *eax_4
            bool cond:1_1
            
            if (not(cond:0))
                cond:1_1 = sub_67f0d0(&var_20, (*(*eax_4 + 0x18))((*(eax_6 + 0x14))())) != 0
                eax_6 = *eax_4
            
            void** ebx
            
            if (not(cond:0) && cond:1_1)
                (*(eax_6 + 4))()
                ebx.b = 1
            else
                (*(eax_6 + 4))()
                ebx.b = 0
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            BOOL eax_11
            eax_11.b = ebx.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11

eax_2.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_2
