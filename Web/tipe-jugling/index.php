<?php 

if(isset($_GET['h'])){
    if($_GET['h'] === 'QNKCDZO'){
        die('ga segampang itu eaaa');
    }

    $hash = md5($_GET['h']);
    $nih = md5('QNKCDZO');

    if($hash == $nih){
        include('flag.php');
        print($fl4g);
    }
    else{
        print("techfest{salah_wakowkwkoawko}");
    }
}else {
    show_source(__FILE__);
}


?>