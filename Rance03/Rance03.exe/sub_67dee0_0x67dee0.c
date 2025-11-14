// 函数: sub_67dee0
// 地址: 0x67dee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0c73
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_34 = edi
int32_t ebp = 0
void** result = arg2 - 1
void** result_2 = result

if (arg2 != 1)
    result = edi + 0x34
    int32_t* esi_1 = edi + 0x74
    
    do
        if (result[5] u>= 0x10)
            result = *result
        
        int32_t var_50_1 = ebp
        void** result_1 = result
        int32_t* var_28
        sub_4691f0(&var_28, "%s_y_%d")
        int32_t var_4 = 0
        struct dpparts::CWindow::VTable** ebx_1 = sub_69adc6(0x7c)
        struct dpparts::CWindow::VTable** var_2c_1 = ebx_1
        var_4.b = 1
        int32_t var_6c
        int32_t var_14
        
        if (ebx_1 == 0)
            ebx_1 = nullptr
        else
            int32_t* edi_1 = &var_28
            
            if (var_14 u>= 0x10)
                edi_1 = var_28
            
            HCURSOR var_60_1 = LoadCursorA(nullptr, 0x7f00)
            edi = var_34
            sub_680250(ebx_1, *(edi + 0x20), edi_1, var_6c)
            *ebx_1 = &dpparts::CSplitWindowBorderHeightTuning::`vftable'{for `dpparts::CSplitWindowBorder'}
        
        var_4.b = 0
        int32_t* ecx_1 = &var_28
        int32_t eax_8 = *(edi + 0x24)
        
        if (var_14 u>= 0x10)
            ecx_1 = var_28
        
        var_38 = ebx_1
        var_6c = eax_8 * ebp
        sub_684fb0(ebx_1, ecx_1, 0x54000000, 0, var_6c, 0, eax_8, *(edi + 0x1c), nullptr, 
            *(edi + 0x20))
        ebx_1[0x1c] = edi + 0x30
        ebx_1[0x1b] = edi + 0x32
        ebx_1[0x1d] = *(edi + 0x24)
        int32_t eax_12
        eax_12.b = *(edi + 0x4c)
        char edx_1 = *(edi + 0x4e)
        ebx_1[0x1e].b = eax_12.b
        *(ebx_1 + 0x79) = *(edi + 0x4d)
        *(ebx_1 + 0x7a) = edx_1
        int32_t ecx_4 = esi_1[1]
        int32_t eax_13
        
        if (&var_38 u< ecx_4)
            eax_13 = *esi_1
        
        if (&var_38 u>= ecx_4 || eax_13 u> &var_38)
            if (ecx_4 == esi_1[2])
                int32_t var_50_3 = ecx_4
                sub_412f20(esi_1)
            
            struct dpparts::CWindow::VTable*** eax_16 = esi_1[1]
            
            if (eax_16 != 0)
                *eax_16 = ebx_1
        else
            if (ecx_4 == esi_1[2])
                int32_t var_50_2 = ecx_4
                sub_412f20(esi_1)
            
            int32_t* ecx_6 = esi_1[1]
            
            if (ecx_6 != 0)
                *ecx_6 = *(*esi_1 + ((&var_38 - eax_13) s>> 2 << 2))
            
            edi = var_34
        
        esi_1[1] += 4
        int32_t var_4_1 = 0xffffffff
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        ebp += 1
        result = edi + 0x34
    while (ebp u< result_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
