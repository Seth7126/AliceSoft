// 函数: ?__crtGetStringTypeA_stat@@YAHPAUlocaleinfo_struct@@KPBDHPAGHH@Z
// 地址: 0x6aae7a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t CodePage = arg6
int32_t edi
int32_t var_14 = edi
BOOL result_1 = 0

if (CodePage == 0)
    uint32_t CodePage_1 = *(*arg1 + 4)
    CodePage = CodePage_1
    arg6 = CodePage_1

int32_t eax_4
eax_4.b = arg7 != 0
int32_t cchWideChar = MultiByteToWideChar(CodePage, (eax_4 << 3) + 1, arg3, arg4, nullptr, 0)
BOOL result

if (cchWideChar != 0)
    int32_t ecx_1
    
    if (cchWideChar s> 0 && cchWideChar u<= 0x7ffffff0)
        ecx_1 = cchWideChar * 2
    
    void* esi_2
    
    if (cchWideChar s<= 0 || cchWideChar u> 0x7ffffff0 || ecx_1 + 8 u<= ecx_1)
        esi_2 = nullptr
    label_6aaf1c:
        
        if (esi_2 == 0)
            result = 0
        else
            _memset(esi_2, 0, cchWideChar * 2)
            int32_t cchSrc =
                MultiByteToWideChar(arg6, MB_PRECOMPOSED, arg3, arg4, esi_2, cchWideChar)
            
            if (cchSrc != 0)
                result_1 = GetStringTypeW(arg2, esi_2, cchSrc, arg5)
            
            sub_6a79e2(esi_2)
            result = result_1
    else
        int32_t* esi_1
        
        if ((cchWideChar << 1) + 8 u> 0x400)
            esi_1 = _malloc((cchWideChar << 1) + 8)
            
            if (esi_1 != 0)
                *esi_1 = 0xdddd
            label_6aaf15:
                esi_2 = &esi_1[2]
                goto label_6aaf1c
            
            result = 0
        else
            __alloca_probe_16((cchWideChar << 1) + 8)
            esi_1 = &var_14
            
            if (&var_14 != 0)
                var_14 = 0xcccc
                goto label_6aaf15
            
            result = 0
else
    result = 0

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
