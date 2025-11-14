// 函数: sub_46cec0
// 地址: 0x46cec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = arg1[2]; i != arg1[3]; i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

int32_t result = arg1[2]
arg1[3] = result
int32_t* ecx_1 = *arg1

if (ecx_1 != 0)
    result = (*(*ecx_1 + 8))(ecx_1)
    *arg1 = 0

return result
