// 函数: sub_44c170
// 地址: 0x44c170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result_1 = arg1
void* esi = arg1[2]
int32_t arg_4 = arg_4
sub_42f3d0(esi + 0x2a0, &result_1, &arg_4)
int32_t* result = result_1

if (result != *(esi + 0x2a0))
    void* esi_1 = result[5]
    
    if (esi_1 != 0)
        int32_t* ecx_1 = *(esi_1 + 0xdc)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))()
            *(esi_1 + 0xdc) = 0
        
        result.b = 1
        return result

result.b = 0
return result
