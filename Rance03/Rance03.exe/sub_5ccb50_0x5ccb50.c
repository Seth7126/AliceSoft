// 函数: sub_5ccb50
// 地址: 0x5ccb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9f86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x8d] -= 4
int32_t ebx = *arg1[0x8d]
int32_t eax_8 = (arg1[0x5e] - arg1[0x5d]) s>> 2
int32_t* result
int32_t var_c0_14
int32_t edx

if (ebx u>= eax_8)
    var_c0_14 = ebx
    result = sub_5c24e0(eax_8, edx, arg1, arg1, 0x6e9714)
else
    eax_8 = *(arg1[0x5d] + (ebx << 2))
    
    if (eax_8 == 0)
        var_c0_14 = ebx
        result = sub_5c24e0(eax_8, edx, arg1, arg1, 0x6e9714)
    else
        int32_t* esi_1
        
        if (*(eax_8 + 0xc) != 0)
            esi_1 = *(eax_8 + 8)
        else
            esi_1 = nullptr
        
        int32_t* var_a0 = esi_1
        
        if (sub_5ccdf0(arg1, esi_1) == 0)
            struct win32only::CDialog::usernotice::CVMErrorDialog::VTable* dwInitParam
            sub_64b100(&dwInitParam)
            int32_t var_4 = 0
            int32_t var_88
            sub_401f60(&var_88, esi_1)
            var_4.b = 1
            void var_4c
            sub_401ff0(&var_4c, &var_88, 0, 0xffffffff)
            int32_t var_74
            
            if (var_74 u>= 0x10)
                j__free(var_88)
            
            int32_t* var_9c = nullptr
            int32_t var_98_1 = 0
            int32_t var_94_1 = 0
            var_4.b = 2
            int32_t ecx_5 = sub_5c22f0(arg1, &var_9c)
            HWND hWndParent
            
            if (data_75d534 == 0)
                hWndParent = nullptr
            else
                int32_t var_c0_5 = ecx_5
                int32_t* eax_11 = sub_6203f0()
                
                if (eax_11 == 0)
                    hWndParent = nullptr
                else
                    int32_t* eax_12 = (**eax_11)(0x6ea7a0)
                    
                    if (eax_12 == 0)
                        hWndParent = nullptr
                    else
                        hWndParent = (**eax_12)(eax_4)
            
            HINSTANCE hInstance = arg1[2]
            HINSTANCE hInstance_1 = hInstance
            void var_34
            sub_568f90(&var_34, &var_9c)
            char var_14_1 = 0
            int32_t eax_15
            int32_t ecx_9
            eax_15, ecx_9 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_697100, &dwInitParam)
            int32_t var_54_1 = eax_15
            
            if (eax_15 != 0)
                if (var_14_1 != 0)
                    hWndParent = arg1[0x82] - arg1[0x83]
                    uint32_t var_c0_8 = zx.d(data_75dd32)
                    HWND* var_c4_1 = &hWndParent
                    int32_t** var_90
                    sub_4ce350(&arg1[0x49a], &var_90, ecx_9)
                    void var_70
                    sub_401f60(&var_70, var_a0)
                    var_4.b = 3
                    var_a0 = arg1[0x82] - arg1[0x83]
                    sub_412d60(sub_5cfe90(&arg1[0x49c], &var_a0), &var_70)
                    sub_401fb0(&var_70)
                
                sub_5ddf10(&arg1[0x88], ebx)
            else
                arg1[0x85].b = eax_15.b
                
                if (arg1[0x86] == eax_15)
                    arg1[0x86] = 1
            
            int32_t* esi_2 = var_9c
            
            if (esi_2 != 0)
                sub_4107c0(esi_2, var_98_1)
                j__free(esi_2)
            
            result = sub_64b190(&dwInitParam)
        else
            result = sub_5ddf10(&arg1[0x88], ebx)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a8)
return result
