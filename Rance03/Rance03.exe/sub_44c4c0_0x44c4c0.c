// 函数: sub_44c4c0
// 地址: 0x44c4c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
void* ebx = arg1[3]
int32_t arg_4
int32_t edi = arg_4
arg_4 = edi
sub_42f3d0(ebx + 0x2a0, &var_4, &arg_4)

if (var_4 != *(ebx + 0x2a0))
    arg_4 = edi
    sub_42f3d0(ebx + 0x2a0, &var_4, &arg_4)
    int32_t* eax_1 = var_4
    
    if (eax_1 != *(ebx + 0x2a0))
        void* eax_2 = eax_1[5]
        
        if (eax_2 != 0)
            int32_t result = *(eax_2 + 0xd8)
            
            if (result != 0)
                return result

return 0
