// 函数: sub_6cccd0
// 地址: 0x6cccd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
void* edi = data_7fcb50
int32_t var_28 = 0

if (*(edi + 4) != 0)
    goto label_6ccd10

if (OpenClipboard(nullptr) == 0)
    sub_403360(arg1, 0x75d7df)
else
    *(edi + 4) = 1
label_6ccd10:
    HANDLE hMem = GetClipboardData(1)
    
    if (hMem != 0)
        char* eax_3 = GlobalLock(hMem)
        
        if (eax_3 != 0)
            void var_24
            sub_403360(&var_24, eax_3)
            GlobalUnlock(hMem)
            
            if (*(edi + 4) != 0)
                CloseClipboard()
                *(edi + 4) = 0
            
            *(arg1 + 0x14) = 0xf
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_4056a0(arg1, &var_24)
            sub_403320(&var_24)
        else
            if (*(edi + 4) != eax_3.b)
                CloseClipboard()
                *(edi + 4) = 0
            
            sub_403360(arg1, 0x75d7dd)
    else
        if (*(edi + 4) != hMem.b)
            CloseClipboard()
            *(edi + 4) = hMem.b
        
        sub_403360(arg1, 0x75d7de)

@__security_check_cookie@4(eax_1 ^ &var_2c)
return arg1
