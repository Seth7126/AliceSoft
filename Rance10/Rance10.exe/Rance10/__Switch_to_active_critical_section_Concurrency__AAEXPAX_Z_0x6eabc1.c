// 函数: ?_Switch_to_active@critical_section@Concurrency@@AAEXPAX@Z
// 地址: 0x6eabc1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[2] = arg2[2]
arg1[1] = arg2[1]
bool cond:0 = arg1[1] != 0
int32_t* result = *arg2
*arg1 = result

if (not(cond:0))
    result = arg2
    
    if (result == arg1[7])
        arg1[7] = arg1
    else
        result = arg1[7]
    
    if (result != arg2)
        Concurrency::details::LockQueueNode::WaitForNextNode(arg2)
        arg1[2] = arg2[2]
        arg1[1] = arg2[1]
        result = *arg2
        *arg1 = result

arg1[6] = arg1
return result
