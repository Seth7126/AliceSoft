// 函数: sub_45aae0
// 地址: 0x45aae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* lpOutputString_1 = arg1
PSTR lpOutputString

if (lpOutputString_1[5] u< 0x10)
    lpOutputString = lpOutputString_1
else
    lpOutputString = *lpOutputString_1

OutputDebugStringA(lpOutputString)

if (data_7fcb28 != 0)
    _puts(lpOutputString)

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_45a9b0(lpOutputString_1)
int32_t* ecx_1 = data_7fcb9c

if (ecx_1 == 0)
    int32_t* ecx_2 = data_7fcb88
    
    if (ecx_2 != 0)
        result = (**ecx_2)(0x7615c4)
        data_7fcb9c = result
    
    if (ecx_2 == 0 || result == 0)
        return result
    
    (*result)->Next()
    ecx_1 = data_7fcb9c

if (lpOutputString_1[5] u>= 0x10)
    lpOutputString_1 = *lpOutputString_1

return (*(*ecx_1 + 0x20))(lpOutputString_1)
