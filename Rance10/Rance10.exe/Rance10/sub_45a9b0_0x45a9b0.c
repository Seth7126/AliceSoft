// 函数: sub_45a9b0
// 地址: 0x45a9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728d70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** hWnd = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1
int32_t* ecx = data_7fcb88

if (ecx != 0)
    hWnd = (**ecx)("|.Pd")
    
    if (hWnd != 0)
        hWnd = (*hWnd)->Next(eax_2)
        
        if (hWnd != 0)
            void* ebx_2 = esi[4] + 1
            struct win32only::CFileMapping::VTable* var_3c = &win32only::CFileMapping::`vftable'
            void* var_58_1 = ebx_2
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c_1 = 0
            int32_t var_38_1 = 0
            char* lpBaseAddress = nullptr
            int32_t var_30_1 = 0
            int32_t var_8_1 = 0
            void var_54
            sub_403360(&var_54, "Sys4xVMOutput")
            var_8_1.b = 1
            ebx_2.b = sub_6cde00(&var_3c, &var_54, ebx_2) == 0
            sub_403320(&var_54)
            
            if (ebx_2.b == 0)
                if (esi[5] u>= 0x10)
                    esi = *esi
                
                sub_700660(lpBaseAddress, esi, var_58_1)
                
                if (lpBaseAddress != 0)
                    UnmapViewOfFile(lpBaseAddress)
                    int32_t var_34_1 = 0
                
                SendMessageA(hWnd, 0x400, 0, 0)
            
            hWnd = sub_6cddb0(&var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return hWnd
