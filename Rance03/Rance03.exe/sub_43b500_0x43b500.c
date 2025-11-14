// 函数: sub_43b500
// 地址: 0x43b500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b62b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
HANDLE var_1c = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
int32_t* ebx = arg1
HANDLE esi = var_1c
int32_t* result

if (sub_6049e0(&var_20, &ebx[4]) == 0)
    result = nullptr
else
    int32_t lDistanceToMove = *ebx
    
    if (var_14 u>= ebx[1] + lDistanceToMove)
        if (esi != 0xffffffff && lDistanceToMove u< var_14)
            SetFilePointer(esi, lDistanceToMove, nullptr, FILE_BEGIN)
            int32_t lDistanceToMove_1 = lDistanceToMove
        
        result = sub_69adc6(0x20)
        arg1 = result
        var_4.b = 1
        
        if (result == 0)
            result = nullptr
        else
            *result = &common::CIMemory::`vftable'{for `IMemory'}
            sub_5f4370(&result[1])
            result[5] = 0
            result[6] = 0
            result[7] = 0
        
        var_4.b = 0
        
        if ((*(*result + 8))(ebx[1]) != 0)
            struct filesystem::CFile::VTable* const* ecx_9 = &var_20
            
            if (sub_604e90(&var_20, (*(*result + 0x18))(ebx[1], eax_2)) != 0)
                sub_604a50(ecx_9)
                esi = var_1c
            else
                sub_604a50(ecx_9)
                (*(*result + 4))()
                esi = var_1c
                result = nullptr
        else
            if (esi != 0xffffffff)
                if (CloseHandle(esi) != 0)
                    esi = 0xffffffff
                
                HANDLE var_1c_1 = esi
            
            (*(*result + 4))(eax_2)
            result = nullptr
    else
        if (esi != 0xffffffff && CloseHandle(esi) != 0)
            esi = 0xffffffff
        
        result = nullptr

if (esi != 0xffffffff)
    CloseHandle(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
