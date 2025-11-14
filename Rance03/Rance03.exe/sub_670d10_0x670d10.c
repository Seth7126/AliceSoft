// 函数: sub_670d10
// 地址: 0x670d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = __security_cookie ^ &var_88
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1 + 0x18
int32_t var_80 = 0
int32_t __saved_edi
(*(*(arg1 + 0x18) + 0x10))(__security_cookie ^ &__saved_edi)
int32_t eax_7 = (*(*ebp + 0x14))()
sub_6972e0(ebp, *(arg1 + 0x10), *(arg1 + 0x11), *(arg1 + 0x12))
HDC hdc = *(arg1 + 0x3c)
COLORREF color = SetBkColor(hdc, *(arg1 + 0x10))
int32_t var_78 = *(arg1 + 0x4c)
int32_t esi = 0
uint32_t y = ((*(*ebp + 0x14))() - *(arg1 + 0x48)) u>> 1
int32_t eax_11
int32_t edx_1
edx_1:eax_11 = sx.q(*(arg1 + 0x58))
int32_t var_74 = 0
int32_t eax_13 = (eax_11 - edx_1) s>> 1
int32_t eax_16 = (*(arg1 + 8) - *(arg1 + 4)) s>> 5

if (eax_16 != 0)
    int32_t ebp_1 = 0
    
    do
        int32_t eax_17
        eax_17.b = *(*(arg1 + 4) + ebp_1 + 0x1c)
        
        if (eax_17.b != 0)
            SetBkColor(hdc, *(arg1 + 0x10))
            
            if (esi == *(arg1 + 0x7c))
                SetBkColor(hdc, 0xf0f0f0)
            
            COLORREF color_1 = 0xffffff
            
            if (esi == *(arg1 + 0x7c))
                color_1 = 0
            
            char var_81_1
            int32_t var_58
            int32_t edx_3
            
            if (arg3 == 0 || arg5 s>= eax_7)
                edx_3 = var_80
                var_81_1 = 0
            else
                edx_3 = var_80 | 1
                int32_t ecx_11 = arg2 + arg4
                var_80 = edx_3
                
                if (*(sub_456bd0(*(arg1 + 4) + ebp_1, &var_58) + 0x10) * eax_13 + var_78 u<= ecx_11
                        || var_78 u>= ecx_11)
                    var_81_1 = 0
                else
                    var_81_1 = 1
            
            int32_t var_44
            
            if ((edx_3.b & 1) != 0)
                var_80 = edx_3 & 0xfffffffe
                
                if (var_44 u>= 0x10)
                    j__free(var_58)
            
            if (var_81_1 != 0)
                SetBkColor(hdc, 0xdcdcdc)
            
            HGDIOBJ h = SelectObject(hdc, *(arg1 + 0x54))
            COLORREF color_2 = SetTextColor(hdc, color_1)
            int32_t var_28
            char* eax_23 = sub_456bd0(*(arg1 + 4) + ebp_1, &var_28)
            int32_t var_4 = 0
            uint8_t* lpString = sub_456bd0(*(arg1 + 4) + ebp_1, &var_58)
            
            if (*(lpString + 0x14) u>= 0x10)
                lpString = *lpString
            
            TextOutA(hdc, var_78 - arg2, y, lpString, *(eax_23 + 0x10))
            
            if (var_44 u>= 0x10)
                j__free(var_58)
            
            int32_t var_4_1 = 0xffffffff
            var_44 = 0xf
            int32_t var_48_1 = 0
            var_58.b = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            char var_40
            var_78 += *(sub_456bd0(*(arg1 + 4) + ebp_1, &var_40) + 0x10) * eax_13
            int32_t var_2c
            
            if (var_2c u>= 0x10)
                j__free(var_40.d)
            
            var_2c = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            SetTextColor(hdc, color_2)
            SelectObject(hdc, h)
            esi = var_74
        
        esi += 1
        ebp_1 += 0x20
        var_74 = esi
    while (esi u< eax_16)
    
    ebp = arg1 + 0x18

SetBkColor(*(arg1 + 0x3c), color)
HGDIOBJ eax_29 = CreatePen(PS_COSMETIC, 0, *(arg1 + 0x14))
SelectObject(hdc, eax_29)
MoveToEx(hdc, 0, (*(*ebp + 0x14))(0) - 1)
LineTo(hdc, (*(*ebp + 0x10))((*(*ebp + 0x14))() - 1))
BOOL result = DeleteObject(eax_29)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return result
