// 函数: sub_49c9a0
// 地址: 0x49c9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_28
int32_t eax_1 = __security_cookie ^ &var_28
int32_t edi = *(arg1 + 0x24)
uint32_t eax_3 = timeGetTime()
POINT point
point.x = eax_3
EnterCriticalSection(data_7e70bc + 4)
int32_t x = data_7fd50c
CRITICAL_SECTION* lpCriticalSection = data_7e70bc + 4

if (eax_3 u>= x)
    data_7fd50c = eax_3
    LeaveCriticalSection(lpCriticalSection)
    x = point.x
else
    LeaveCriticalSection(lpCriticalSection)

if (x - *(arg1 + 0x18) u< edi)
    while (true)
        uint32_t eax_5 = timeGetTime()
        EnterCriticalSection(data_7e70bc + 4)
        uint32_t esi_1 = data_7fd50c
        CRITICAL_SECTION* lpCriticalSection_1 = data_7e70bc + 4
        
        if (eax_5 u>= esi_1)
            data_7fd50c = eax_5
            LeaveCriticalSection(lpCriticalSection_1)
            esi_1 = eax_5
        else
            LeaveCriticalSection(lpCriticalSection_1)
        
        int32_t esi_2 = esi_1 - *(arg1 + 0x18)
        
        if (esi_2 u>= edi)
            break
        
        int32_t nHeight = *(arg1 + 0x30)
        MoveWindow(arg2, 0, divu.dp.d(0:(nHeight * esi_2), edi) - nHeight, *(arg1 + 0x2c), nHeight, 
            1)
        GetCursorPos(&point)
        RECT rect
        
        if (GetWindowRect(arg2, &rect) != 0)
            if (point.y s> rect.bottom + 1)
                PostMessageA(arg2, 0x7fff, 0, 0)
                goto label_49caf2

if (*(arg1 + 0x1c) == 0)
    MoveWindow(arg2, 0, 0, *(arg1 + 0x2c), *(arg1 + 0x30), 1)
    *(arg1 + 0x1c) = 1

label_49caf2:
@__security_check_cookie@4(eax_1 ^ &var_28)
return 0
