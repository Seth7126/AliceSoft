// 函数: sub_696ff0
// 地址: 0x696ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* esi = data_75d4d0
int32_t var_20 = 0

if (*(esi + 4) != 0)
    goto label_69702b

if (OpenClipboard(nullptr) == 0)
    sub_401f60(arg1, 0x6da976)
else
    *(esi + 4) = 1
label_69702b:
    HANDLE hMem = GetClipboardData(1)
    
    if (hMem != 0)
        char* eax_3 = GlobalLock(hMem)
        
        if (eax_3 != 0)
            int32_t var_1c
            sub_401f60(&var_1c, eax_3)
            GlobalUnlock(hMem)
            
            if (*(esi + 4) != 0)
                CloseClipboard()
                *(esi + 4) = 0
            
            sub_403000(arg1, &var_1c)
            int32_t var_8
            
            if (var_8 u>= 0x10)
                j__free(var_1c)
        else
            if (*(esi + 4) != eax_3.b)
                CloseClipboard()
                *(esi + 4) = 0
            
            sub_401f60(arg1, 0x6da96b)
    else
        if (*(esi + 4) != hMem.b)
            CloseClipboard()
            *(esi + 4) = hMem.b
        
        sub_401f60(arg1, 0x6da975)

sub_69a5bc(eax_1 ^ &var_24)
return arg1
