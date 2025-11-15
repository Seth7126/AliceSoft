// 函数: ?Remove@?$Hash@PAV_TaskCollection@details@Concurrency@@PAV123@@details@Concurrency@@AAEPAUListNode@123@ABQAV_TaskCollection@23@H@Z
// 地址: 0x6f3ec2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = nullptr
int32_t ecx = *(arg1 + 8)

for (void** i = *(ecx + (arg3 << 2)); i != 0; i = *i)
    if (i[1] == *arg2)
        if (i_1 != 0)
            *i_1 = *i
        else
            *(ecx + (arg3 << 2)) = *i
        
        *(arg1 + 4) -= 1
        return i
    
    i_1 = i

return nullptr
