// 函数: sub_6853d0
// 地址: 0x6853d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

enum D3D_FEATURE_LEVEL featureLevel
int32_t eax_1 = __security_cookie ^ &featureLevel
int32_t esi = 0
enum D3D_FEATURE_LEVEL featureLevels = D3D_FEATURE_LEVEL_11_0
int32_t var_18
__builtin_memcpy(&var_18, 
    "\x00\xa1\x00\x00\x00\xa0\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00", 0x14)
featureLevel = D3D_FEATURE_LEVEL_11_0
int32_t var_10
HRESULT result

while (D3D11CreateDevice(0, (&var_10)[esi], nullptr, 0, &featureLevels, 3, 7, arg1 + 8, 
        &featureLevel, arg1 + 0xc) s< 0)
    esi += 1
    
    if (esi u>= 3)
        result.b = 0
        @__security_check_cookie@4(eax_1 ^ &featureLevel)
        return result

if (esi u< 3)
    result.b = 1
    @__security_check_cookie@4(eax_1 ^ &featureLevel)
    return result

result.b = 0
@__security_check_cookie@4(eax_1 ^ &featureLevel)
return result
