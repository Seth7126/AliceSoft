// 函数: sub_5d7350
// 地址: 0x5d7350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
char result = sub_5d84e0(arg1)

if (result == 0)
    return result

__Smtx_lock_shared(&arg1[3])
int32_t* ebp = arg1[2]
__Smtx_unlock_shared(&arg1[3])
__Smtx_lock_shared(&arg1[3])
int32_t* ebx = arg1[2]
__Smtx_unlock_shared(&arg1[3])
__Smtx_lock_shared(&arg1[3])
int32_t* edi_1 = arg1[2]
__Smtx_unlock_shared(&arg1[3])
int32_t eax_3 = (*(*ebx + 0x1c))((*(*ebp + 0x20))())
return sub_56a720(&arg1[7], *arg1, edi_1, eax_3) != 0
