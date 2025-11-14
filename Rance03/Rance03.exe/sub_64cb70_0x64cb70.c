// 函数: sub_64cb70
// 地址: 0x64cb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
RECT rect
rect.right = 0xffffffff
rect.top = sub_6ce95b
TEB* fsbase
rect.left = fsbase->NtTib.ExceptionList
int32_t* var_18 = arg1
int32_t* ecx = __chkstk(0x4034)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_4020
fsbase->NtTib.ExceptionList = &arg_4020
int32_t* edi = ecx
var_18 = edi
char* esi = arg2
char arg_14[0x4004]
char (* eax_5)[0x4004] = &arg_14
ecx.b = *esi

if (ecx.b != 0)
    do
        if ((ecx.b u< 0x81 || ecx.b u> 0x9f) && (ecx.b u< 0xe0 || ecx.b u> 0xef))
            if (ecx.b != 0xa)
                *eax_5 = ecx.b
                eax_5 = &(*eax_5)[1]
            else
                *eax_5 = 0
                sub_64cd70(edi, &arg_14)
                int32_t arg_10 = 0xf
                int32_t arg_c = 0
                var_4.b = 0
                sub_402110(&var_4, 0x6da80b, nullptr)
                int32_t arg_4028 = 0
                sub_412d60(&edi[0x2e], &var_4)
                arg_4028 = 0xffffffff
                eax_5 = &arg_14
            
            esi = &esi[1]
        else
            *eax_5 = ecx.b
            ecx.b = esi[1]
            (*eax_5)[1] = ecx.b
            eax_5 = &(*eax_5)[2]
            esi = &esi[2]
        
        ecx.b = *esi
    while (ecx.b != 0)
    
    if (eax_5 u> &arg_14)
        *eax_5 = 0
        sub_64cd70(edi, &arg_14)

int32_t* result = edi[2]
HWND hWnd = *result

if (hWnd != 0)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x2aaaaaab, edi[0x2f] - edi[0x2e])
    int32_t edx_2 = edx_1 s>> 2
    GetClientRect(hWnd, &rect)
    int32_t edi_1 = edi[5]
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(edi_1)
    int32_t eax_11
    int32_t edx_5
    edx_5:eax_11 = sx.q(rect.right - rect.left)
    int32_t* edi_2 = var_18
    sub_650f00(edi_2, divs.dp.d(sx.q(rect.bottom - rect.top), var_18[7] + edi_1))
    sub_651040(edi_2, divs.dp.d(edx_5:eax_11, (eax_8 - edx_4) s>> 1))
    sub_650f80(edi_2, (edx_2 u>> 0x1f) + edx_2 - 1, 1)
    result = (*(*edi_2 + 0x3c))(eax_4)

fsbase->NtTib.ExceptionList = arg_4020
sub_69a5bc(eax_2 ^ &var_18)
return result
