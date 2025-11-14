// 函数: sub_44ee00
// 地址: 0x44ee00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
arg2 = ebx
int32_t* var_10
sub_42f3d0(arg1 + 4, &var_10, &arg2)
int32_t* esi = var_10

if (esi != *(arg1 + 4))
    int32_t* ecx_1 = esi[5]
    
    if (ecx_1 != 0)
        ecx_1[1] -= 1
        
        if (ecx_1[1] s<= 0)
            (**ecx_1)(1)
    
    sub_420180(arg1 + 4, &arg2, esi)

struct chipmunk::CSprite::VTable** eax_2
struct chipmunk::CSprite::VTable** ecx_3
eax_2, ecx_3 = sub_69adc6(0xe0)
struct chipmunk::CSprite::VTable** eax_3

if (eax_2 == 0)
    eax_3 = nullptr
else
    ecx_3 = eax_2
    eax_3 = sub_44e7c0(ecx_3, ebx)

struct chipmunk::CSprite::VTable** var_c = eax_3
uint32_t var_20_3 = zx.d(data_75dd27)
var_10 = ebx
int32_t** var_24_2 = &var_10
int32_t** var_8
sub_44f3e0(arg1 + 4, &var_8, ecx_3)
int32_t*** result
result.b = 1
return result
