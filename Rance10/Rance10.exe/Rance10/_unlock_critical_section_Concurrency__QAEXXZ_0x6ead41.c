// 函数: ?unlock@critical_section@Concurrency@@QAEXXZ
// 地址: 0x6ead41
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1[6]
*arg1 = 0
int32_t* i = result_1[1]
arg1[6] = i
int32_t* result

if (i != 0)
label_6eadac:
    
    do
        result = sub_6ea997(i)
        
        if (result.b != 0)
            break
        
        int32_t* i_1 = i
        i = i[1]
        arg1[6] = i
        
        if (i == 0)
            int32_t* i_2 = i_1
            
            if (i_2 == arg1[7])
                arg1[7] = 0
            else
                i_2 = arg1[7]
            
            if (i_2 != i_1)
                i = Concurrency::details::LockQueueNode::WaitForNextNode(i_1)
                arg1[6] = i
        
        result = Concurrency::details::LockQueueNode::DerefTimerNode(i_1)
    while (i != 0)
else
    result = result_1
    
    if (result == arg1[7])
        arg1[7] = i
    else
        result = arg1[7]
    
    if (result != result_1)
        result = Concurrency::details::LockQueueNode::WaitForNextNode(result_1)
        i = result
        arg1[6] = i
        
        if (i != 0)
            goto label_6eadac

return result
