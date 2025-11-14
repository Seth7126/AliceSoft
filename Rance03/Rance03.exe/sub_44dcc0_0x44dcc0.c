// 函数: sub_44dcc0
// 地址: 0x44dcc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
void* edi = data_75d4cc
int32_t arg_4 = arg_4
sub_42f3d0(edi + 0x2a0, &var_4, &arg_4)
int32_t* esi = var_4

if (esi != *(edi + 0x2a0))
    int32_t* ecx_1 = esi[5]
    
    if (ecx_1 != 0)
        ecx_1[1] -= 1
        
        if (ecx_1[1] s<= 0)
            (**ecx_1)(1)
    
    sub_420180(edi + 0x2a0, &arg_4, esi)

int32_t** result
result.b = 1
return result
