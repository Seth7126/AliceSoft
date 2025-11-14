// 函数: sub_671cf0
// 地址: 0x671cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0139
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_88 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t var_4 = 0
int32_t* var_48 = arg2
var_74 = ebx
int32_t var_50 = 0
sub_6972e0(arg1 + 4, 0xff, 0xff, 0xff)
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_402110(arg2, 0x6da8ab, nullptr)
int32_t var_4_1 = 0
int32_t ecx_2 = *(arg1 + 0x60)
int32_t edi = *(arg1 + 0x3c)
int32_t var_50_1 = 1
int32_t var_70 = 0
uint32_t temp0_1 = divu.dp.d(0:(*(arg1 + 0x6c) - ecx_2), edi)
int32_t eax_13
int32_t edx_2
edx_2:eax_13 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
int32_t edx_3 = edx_2 s>> 2
uint32_t eax_15 = edx_3 u>> 0x1f

if (eax_15 != neg.d(edx_3))
    int32_t edi_1 = 0
    int32_t var_64_1 = 0
    int32_t var_6c_1 = 0
    bool cond:4_1
    
    do
        void** ecx_6 = *ebx + edi_1
        int32_t var_68 = 0x6da8bb
        int32_t var_2c
        char* eax_17 = sub_403070(ecx_6, &var_2c, 0, 0xc)
        
        if (*(eax_17 + 0x14) u>= 0x10)
            eax_17 = *eax_17
        
        int32_t i = _strtoul(eax_17, &var_68, 0xa)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        if (*(arg1 + 0x64) == i)
            SetBkColor(*(arg1 + 0x28), *(arg1 + 0x7c))
        
        int32_t eax_18 = var_70
        
        if (arg6 != 0 && temp0_1 == eax_18)
            void* ecx_7 = *var_74
            int32_t* eax_22 = sub_403070(ecx_7 + edi_1, &var_2c, 0, *(ecx_7 + edi_1 + 0x10) - 1)
            
            if (arg2 != eax_22)
                if (arg2[5] u>= 0x10)
                    j__free(*arg2)
                
                arg2[5] = 0xf
                arg2[4] = 0
                *arg2 = 0
                sub_4030b0(arg2, eax_22)
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            edi_1 = var_6c_1
            char* eax_24 = sub_403070(*var_74 + edi_1, &var_2c, 0, 0xc)
            
            if (*(eax_24 + 0x14) u>= 0x10)
                eax_24 = *eax_24
            
            *(arg1 + 0x64) = _strtoul(eax_24, &var_68, 0xa)
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            SetBkColor(*(arg1 + 0x28), *(arg1 + 0x7c))
            *(arg1 + 0x68) = *(arg1 + 0x64)
            eax_18 = var_70
        
        if (divu.dp.d(0:(arg5 - ecx_2), edi) == eax_18)
            char* eax_28 = sub_403070(*var_74 + edi_1, &var_2c, 0, 0xc)
            
            if (*(eax_28 + 0x14) u>= 0x10)
                eax_28 = *eax_28
            
            *(arg1 + 0x68) = _strtoul(eax_28, &var_68, 0xa)
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            SetBkColor(*(arg1 + 0x28), *(arg1 + 0x80))
        
        int32_t ecx_14 = *(arg1 + 0x74)
        int32_t* eax_30 = *(arg1 + 0x70)
        
        if (eax_30 != ecx_14)
            while (*eax_30 != i)
                eax_30 = &eax_30[1]
                
                if (eax_30 == ecx_14)
                    break
            
            if (eax_30 != ecx_14)
                SetBkColor(*(arg1 + 0x28), 0x6464ff)
        
        HGDIOBJ h = SelectObject(*(arg1 + 0x28), *(arg1 + 0x38))
        void** ecx_16 = *var_74 + edi_1
        int32_t edx_4 = ecx_16[4]
        
        if (ecx_16[5] u>= 0x10)
            ecx_16 = *ecx_16
        
        COLORREF color
        
        if (*(edx_4 + ecx_16 - 1) != 0x30)
            color = 0
        else
            color = 0xc8c8c8
        
        COLORREF color_1 = SetTextColor(*(arg1 + 0x28), color)
        int32_t var_30_1 = 0xf
        int32_t c = 0
        void** eax_34 = *var_74 + var_6c_1
        char var_44 = 0
        sub_401ff0(&var_44, eax_34, 0, 0xffffffff)
        char* ecx_18 = &var_44
        
        if (var_30_1 u>= 0x10)
            ecx_18 = var_44.d
        
        ecx_18[c - 1] = 0x20
        char* lpString = &var_44
        
        if (var_30_1 u>= 0x10)
            lpString = var_44.d
        
        TextOutA(*(arg1 + 0x28), ecx_2 - arg4, *(arg1 + 0x60) + var_64_1, lpString, c)
        SetBkColor(*(arg1 + 0x28), 0xffffff)
        SetTextColor(*(arg1 + 0x28), color_1)
        SelectObject(*(arg1 + 0x28), h)
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        edi_1 = var_6c_1 + 0x18
        var_64_1 += edi
        cond:4_1 = var_70 + 1 u< eax_15 + edx_3
        var_70 += 1
        ebx = var_74
        var_6c_1 = edi_1
    while (cond:4_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return arg2
