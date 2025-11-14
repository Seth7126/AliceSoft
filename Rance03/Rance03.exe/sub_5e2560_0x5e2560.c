// 函数: sub_5e2560
// 地址: 0x5e2560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CLoadDLL::`vftable'
int32_t esi_2 = (arg1[2] - arg1[1]) s>> 2
int32_t esi_3 = esi_2 - 1

if (esi_2 - 1 s>= 0)
    int32_t temp1_1
    
    do
        HMODULE vFunc_0 = arg1[1][esi_3].vFunc_0
        
        if (vFunc_0 != 0)
            FreeLibrary(vFunc_0)
        
        temp1_1 = esi_3
        esi_3 -= 1
    while (temp1_1 - 1 s>= 0)

int32_t result = arg1[1]
arg1[2] = result

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
