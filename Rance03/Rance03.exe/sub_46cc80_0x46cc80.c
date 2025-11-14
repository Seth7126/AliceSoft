// 函数: sub_46cc80
// 地址: 0x46cc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4e0

if (sub_46cb80(edi) != 0 && (***(edi + 0x1c))() != 0)
    int32_t nVirtKey_1
    int32_t nVirtKey = nVirtKey_1
    int32_t result
    
    if (nVirtKey - 0x79 u> 0xe)
        result = GetKeyState(nVirtKey)
        
        if ((0x8000 & result.w) != 0)
            int32_t __saved_ecx
            
            if (nVirtKey s> 0 && (nVirtKey s<= 2 || nVirtKey == 4))
                result = (***(edi + 0xc))(&__saved_ecx, &nVirtKey_1)
            
            if (nVirtKey s<= 0 || (nVirtKey s> 2 && nVirtKey != 4) || result.b != 0)
                result.b = 1
                return result
    
    result.b = 0
    return result

return 0
