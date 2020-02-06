---
title: VirtualBox - Ubuntu
permalink: /vbubuntu
---
<a name="top"></a>

## This is the companion page for the VirtualBox Ubuntu Video

<br/><br/>
<p align="center">
<iframe width="560" height="315" src="" data-src="https://www.youtube.com/embed/Z8dwXODQrLg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</p>
<br/><br/>


The video and this guide will walk you through step-by-step of setting up a VirtualBox Virtual Machine on your computer and using it to install a fresh Ubuntu Virtual Machine installation.
<br/><br/>

This is a rather long and thorough guide, so I have included an index to the major topics:<br/>

[Recommendations and Key Terms](#recommendations-and-key-terms)<br/>
[Download Ubuntu ISO](#download-ubuntu-iso)<br/>
[Download and Install VirtualBox Software](#download-and-install-virtualbox-software)<br/>
[Create a New Virtual Machine](#create-a-new-virtual-machine)<br/>
[Configuring Virtual Machine for Ubuntu Install](#configuring-the-virtual-machine-for-a-ubuntu-install)<br/>
[Installing Ubuntu on your Virtual Machine](#installing-ubuntu-on-your-virtual-machine)<br/>
[Installing Guest Additions](#installing-guest-additions)<br/>
[Create a Shared Folder](#create-a-shared-folder)<br/>
[Create an Initial Snapshot Image](#create-an-initial-snapshot-image)<br/>


<br/><br/>
## Recommendations and Key Terms
<br/>

Before we start, I want to quickly go over a few items:

To follow along with this guide you should have a HDD (SSD preferred) with at least 200 GB of free space, but more is better. Alternatively, you could use an external disk drive with a similar free space capacity, it will be a bit slower but still workable.

If you do not already have a Ubuntu ISO image file, you will also need a high speed Internet connection as we will be downloading a ~2 GB Ubuntu ISO image file. Using a 100 Mbps connection it takes roughly 4 minutes for the download portion, so you can use that as a base reference (i.e. a 10 Mbps connection will take 40 minutes and so on).

<br/><br/>

There are also a few terms I wish to clarify: VM, VB, host system and guest system.

- VM is short for Virtual Machine, a general term describing a computer environment that is virtualized. The VM is the virtual "guest" system that will run on your host.

- VB is short for the Oracle VirtualBox software we are using to create and run our VM (Virtual Machines).

- The ‘host system’ is the physical PC you are probably using right now that you intend to install the VB software on to run the virtual guest machine.

- The ‘guest system’ then is the Virtual Machine that you will be running using the VB software, in this case the virtual Ubuntu system we will be installing.
<br/><br/>

[Back to Top](#top)

<br/>


## Download and Install VirtualBox Software
<br/>

We will need to download the VirtualBox software from Oracle.

Go to [https://www.virtualbox.org/](https://www.virtualbox.org/) and click on Download VirtualBox 6.1 (as of this writing) to go to the download page to begin downloading the Virtualbox software.

<br/><br/><br/>
<p align="center">
<img width="700" height="421" src="images\videos\VirtualBox\VB-Home-2.jpg" title="VirtualBox Download Page">
</p>
Select your host platform, in this example I am using Windows 10 as the host system, so we select Windows hosts link.

A download dialog should appear prompting you to save the file, go ahead and save it to your downloads folder or wherever you typically download files.

Once the download has finished, open up your download folder and double click on the VirtualBox-xxx.exe file to begin the installation, where xxx is the current version number. As of this writing the file is: VirtualBox-6.1.2-135663-Win.exe

<br/><br/><br/>
<p align="center">
<img width="600" height="470" src="images\videos\VirtualBox\VB-Welcome-to-Setup.jpg" title="VirtualBox Welcome to Setup">
</p>
The Welcome to Setup Wizard Screen will appear.

Click on Next to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="467" src="images\videos\VirtualBox\VB-Custom-Setup.jpg" title="VirtualBox Custom Setup">
</p>
On the Custom Setup screen, you can leave the selected components checked. It does indicate that this will use 218 MB of space on your hard drive. You may want to install this in another directory if hard drive space is tight.

By default it uses the C:\Program Files\Oracle\VirtualBox\ directory.

Once you have your installation folder configured, or if you are using the default path, click on Next.

<br/><br/><br/>
<p align="center">
<img width="600" height="470" src="images\videos\VirtualBox\VB-Custom-Setup-2.jpg" title="VirtualBox Custom Setup 2">
</p>
The next screen allows you to choose from the following options:
-    Create a start menu entry  
-    Create a Desktop shortcut  
-    Create a shortcut in the Quick Launch bar  
-    Register file associations  

Pick which options you want to enable, but I would recommend enabling at least the last choice to associate file extensions.

Click on Next to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="467" src="images\videos\VirtualBox\VB-Network.jpg" title="VirtualBox Network Warning">
</p>
The next screen warns you that by continuing your network connection may momentarily drop as VirtualBox configures its virtual network settings.

This only takes a second so you will hardly notice unless you are installing on a device with a wireless connection.

Click on Yes to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="451" src="images\videos\VirtualBox\VB-Install.jpg" title="VirtualBox Ready to Install">
</p>

You will then be presented with a Ready to Install screen informing you the wizard is about to start the custom installation. Now is the time to make any changes by using the "Back" button if you need.

Click on Install to continue.

<br/><br/><br/>
<p align="center">
<img width="600" height="451" src="images\videos\VirtualBox\VB-Install2.jpg" title="VirtualBox Device Driver">
</p>
You may get one or more install device driver prompts during installation.

I usually just check the trust software from Oracle box and click on Install to avoid further prompts.

<br/><br/><br/>
<p align="center">
<img width="600" height="466" src="images\videos\VirtualBox\VB-Install-Finish.jpg" title="VirtualBox Installation Complete">
</p>
Once the setup process has completed, you will see a new window like above.

It has the option to Launch the Oracle VM VirtualBox after installation checked by default. You can go ahead and leave it checked to continue on with the guide.

Click on Finish.

<br/><br/>

[Back to Top](#top)

<br/>
## Create a New Virtual Machine
<br/>

If you are following along in the guide step by step and you left the box checked in the previous step you should already have the screen shown below on your PC. If not, or if you unchecked the box, find the VirtualBox icon or executable and launch the program at this time.
<br/><br/>

<p align="center">
<img width="700" height="444" src="images\videos\VirtualBox\VB-Welcome.jpg" title="VirtualBox Welcome">
</p>
From the Welcome to VirtualBox screen, click on New.
<br/><br/><br/>
<p align="center">
<img width="500" height="459" src="images\videos\VBUbuntu\Create_VM_Name_OS.jpg" title="VirtualBox Name and OS">
</p>
Give your VM a name, such as Ubuntu.

Choose the installation folder, I chose the folder on my C: drive: C:\Users\dev\VirtualBox_VMs.

Type: Linux

Choose Version, in this case Ubuntu (64-bit).

Note that the VirualBox manager has a smart syntax process, so when you type in Ubuntu it will automatically fill in the fields for Linux and Ubuntu.

Click Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="464" src="images\videos\VBUbuntu\Memory_Size.jpg" title="VirtualBox Memory">
</p>
Set the memory size. I chose 4 GB in this example.

Choose no more than ½ of your actual physical RAM to prevent having issues on your host system. I found that 4-8 GB seems to be the sweet spot and works well in most cases.

You can get by with as little as 2 GB, but depending on what applications you are planning on running, the VM can get a bit sluggish with too little RAM.

Once you have the memory size set, Click Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="467" src="images\videos\VBUbuntu\Hard Disk.jpg" title="VirtualBox Create a Virtual HD">
</p>
Make sure Create a virtual hard disk now is selected.

Click on Create.

<br/><br/><br/>
<p align="center">
<img width="500" height="522" src="images\videos\VBUbuntu\Hard Disk_File_Type.jpg" title="VirtualBox Hard Disk File Type">
</p>
For Hard disk file type you can leave it at VDI for this example. The other options are for compatibility with other VM's.

Click on Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="526" src="images\videos\VBUbuntu\Storage_on_Physical_Hard_Disk.jpg" title="VirtualBox Storage on Physical HDD">
</p>
For now choose Dynamically Allocated, unless you have a lot of free hard drive space available. As the dialog indicates, a fixed size can offer some performance benefits, but at the expense that it reserves all the disk space up front.

Choose the option that serves you best and then click on Next.

<br/><br/><br/>
<p align="center">
<img width="500" height="446" src="images\videos\VBUbuntu\File_Location_and_Size.jpg" title="VirtualBox File Location and Size">
</p>
File location and size. This is where your Virtual Machines hard drive will live. I created a folder on an separate SDD, the E: drive for this demonstration: E:\Ubuntu_VM_Image.
I also increased the recommended size from 25 GB to 120 GB, so I have plenty of room to work with.

Once you are done adjusting these settings to meet your needs, click on Create.

This will take you back to the home screen. You now have a Virtual Machine that is the equivalent to a bare metal PC. At this stage it still needs an OS installed on it to be useful.
<br/><br/>

[Back to Top](#top)

<br/>
## Configuring the Virtual Machine for a Ubuntu Install
<br/>

Before we can install the OS we need to go into the settings for the VM we just created and review and adjust anything we may have missed or wish to change. We also need to setup the virtual optical drive to point to our Ubuntu 18.04.3 LTS ISO image we downloaded earlier.

Making sure the Ubuntu VM is selected in the left pane, click on Settings near the top.

<br/><br/><br/>
<p align="center">
<img width="600" height="422" src="images\videos\VBUbuntu\VB_Ubuntu_VM_Settings.jpg" title="VirtualBox Ubuntu VM Settings">
</p>

Review the basic settings under general, they should match what you entered earlier.

Click on System in the left pane.

<br/><br/><br/>
<p align="center">
<img width="600" height="418" src="images\videos\VBUbuntu\VB_System_MB.jpg" title="VirtualBox Ubuntu VM System CPU">
</p>
Under the Motherboard tab, verify the memory allocation you configured earlier, you can also change it here if you need to.

In the Boot Order section, I uncheck Floppy from the boot order menu, but leave the Optical and Hard Disk selections checked.

Leave PIIX3 under chipset.

Also leave Enable I/O APIC checked.

Click on the Processor tab

<br/><br/><br/>
<p align="center">
<img width="600" height="418" src="images\videos\VBUbuntu\VB_System_CPU.jpg" title="VirtualBox Ubuntu VM CPU Settings">
</p>
If you have more than one core, you can increase it here. Like with memory I would advise to choose no more than ½ of your actual cores. I usually choose 2 cores on a multi-core (4+ core) host.

You can leave the execution cap at 100% as long as you are not using all of your physical cores. If you for some reason are using a single or dual core host machine, you may want to reduce this a bit just to be sure you always leave a bit of processing power for the actual host.

Leave everything at the default settings on the acceleration tab.

<br/><br/><br/>
<p align="center">
<img width="600" height="421" src="images\videos\VBUbuntu\VB_System_Display.jpg" title="VirtualBox Ubuntu VM Display Settings">
</p>
Under Display, ensure that Video Memory is set to 128 MB and VMSVGA is selected. You can leave 3D acceleration unchecked unless you plan to use it in some way, but most 3D applications don’t work too well in a VM environment.

<br/><br/><br/>
<p align="center">
<img width="600" height="420" src="images\videos\VBUbuntu\VB_Storage.jpg" title="VirtualBox Ubuntu VM Storage Settings">
</p>
Under Storage we will need to select the image file for the OS you wish to run. This can be Linux or Windows, but since in this guide we are installing Ubuntu, we will use the Ubuntu 18.04.3 LTS ISO image file we downloaded earlier. This will act as the installation media, the same as if we had a Ubuntu setup DVD inserted within the optical drive.

Click on the DVD icon under Controller SATA, it should say empty at this point. Over in the right half of the window click the disk icon and then choose disk file.

<br/><br/><br/>
<p align="center">
<img width="600" height="288" src="images\videos\VBUbuntu\VB_Storage2.jpg" title="VirtualBox Ubuntu VM Storage Settings">
</p>
Browse to the Ubuntu ISO image you downloaded earlier. Click on its name to select it and make sure it is entered into the File Name field as shown above, then click on open.

<br/><br/><br/>
<p align="center">
<img width="600" height="418" src="images\videos\VBUbuntu\VB_Storage3.jpg" title="VirtualBox Ubuntu VM Storage Settings">
</p>

Your screen should now show ubuntu-18.04.3-desktop-amd64.iso along with the Ubuntu.vdi disk, as shown in the image above. Now that we have our installation media configured we are almost ready to begin installing Ubuntu on our VM.

<br/><br/><br/>
<p align="center">
<img width="600" height="419" src="images\videos\VBUbuntu\VB_Network.jpg" title="VirtualBox Ubuntu VM Network Settings">
</p>
Go down to the Network section just to be sure Enable network adapter and Attached to Nat are both selected.

The rest of the settings should be fine for now. We will look at setting up Shared Folders later on once Ubuntu has been installed on the VM.

You can now click on OK to leave the settings window and save your changes.
<br/><br/>


[Back to Top](#top)

<br/><br/>

## Installing Ubuntu on your Virtual Machine

<br/><br/><br/>
<p align="center">
<img width="600" height="356" src="images\videos\VBUbuntu\VM_Ubuntu_Start.jpg" title="VirtualBox Ubuntu Start">
</p>
With the settings we made above in place, you can now go ahead and click on start to start the Ubuntu Virtual Machine.

<br/><br/><br/>
<p align="center">
<img width="500" height="441" src="images\videos\VBUbuntu\VM_Ubuntu_Select_Startup_Disk.jpg" title="VirtualBox Select Start-up Disk">
</p>
You may get a prompt right away asking you to select the start-up disk.

Confirm that the ubuntu-18.04.3-desktop-amd64.iso image we configured earlier is the file selected, change if need be, and click on Start to begin.

The Virtual Machine will now start and boot off the ISO image to begin the Ubuntu installation process.

<br/><br/><br/>
<p align="center">
<img width="500" height="423" src="images\videos\VBUbuntu\VM_Ubuntu_Install_Welcome.jpg" title="VirtualBox Ubuntu Install Welcome">
</p>
After a few moments, you should see the Install screen shown above.

Confirm the installation instruction language and click on the Install Ubuntu button to install to the Virtual Machine.

<br/><br/><br/>
<p align="center">
<img width="500" height="424" src="images\videos\VBUbuntu\VM_Ubuntu_Install_Keyboard.jpg" title="Keyboard Layout">
</p>
The Setup process will begin. After a short wait you will be asked to confirm your keyboard layout and language.

Adjust if needed and click on Continue.

<br/><br/><br/>
<p align="center">
<img width="500" height="422" src="images\videos\VBUbuntu\VM_Ubuntu_Install_Updates.jpg" title="Updates and other Software">
</p>
On this next screen you are asked which type of installation you want. Choose the default "Normal installation" unless you need a minimal install for some reason.

Also it is probably a good idea to leave Download updates while installing Ubuntu checked, unless you have limited Internet connectivity.

You can also optionally select Install third-party software if this will be a more permanent Ubuntu install and you want access to the additional features.

Click on continue after you selected the options you want.

<br/><br/><br/>
<p align="center">
<img width="500" height="424" src="images\videos\VBUbuntu\VM_Ubuntu_Installation_Type.jpg" title="Installation Type">
</p>
The Ubuntu installer will then inform you there is no detected operating system. This is because we allocated an empty 120 GB of a virtual hard drive the VM is using.

Choose the Erase disk and install Ubuntu option (default). Again, you can disregard the warning as this is referring to the empty 120 GB partition we created earlier and not your host file system which is completely safe.

Leave the other options unchecked at this point unless you know what you are doing.

Click on Install Now.


<br/><br/><br/>
<p align="center">
<img width="500" height="422" src="images\videos\VBUbuntu\VM_Ubuntu_Disk_Changes.jpg" title="Confirm Disk Changes">
</p>
You will then be presented with a summary of the proposed disk changes. This indicates how the 120 GB VDI will be partitioned for Ubuntu.

Accept the proposed changes by clicking on Continue.

<br/><br/><br/>
<p align="center">
<img width="500" height="421" src="images\videos\VBUbuntu\VM_Ubuntu_Location.jpg" title="Location">
</p>
You will then be asked to confirm your location.

Change this if you need to, but the setup program usually can autodetect this. This is used to set your time and date.

Click on Continue.

<br/><br/><br/>
<p align="center">
<img width="500" height="418" src="images\videos\VBUbuntu\VM_Ubuntu_User_Account.jpg" title="User Account">
</p>
Next you will be asked to create a user account.

Enter the name you wish to use on the machine and also set a password. You can also choose to log in automatically, bypassing the normal login screen.

Depending on how secure you want this installation to be, choose the appropriate option. Since for me this will just be used for demonstration purposes, I am going to choose automatic login to make life easier.

Click on Continue when done.

At this point the actually installation process will begin installing the files needed. Depending on how you configured the VM with CPU, memory, and if you are on a SSD or not, this can take anywhere from 10 to 30 minutes.

<br/><br/><br/>
<p align="center">
<img width="500" height="423" src="images\videos\VBUbuntu\VM_Ubuntu_Restart.jpg" title="Ubuntu Restart Now">
</p>
After the installation process has completed, you will be prompted to restart the VM.

Click on Restart Now to complete the process.

<br/><br/><br/>
<p align="center">
<img width="500" height="423" src="images\videos\VBUbuntu\VM_Ubuntu_Click_Enter.jpg" title="Ubuntu Click Enter">
</p>
When the Virtual Machine reboots, it will display a screen similar to the one above. It may also have a flashing effect and you may think something is wrong.

However, if you read the dialog it is simply waiting for you to confirm the installation media has been removed.

You can just go ahead and click enter here to continue.

<br/><br/><br/>
<p align="center">
<img width="500" height="423" src="images\videos\VBUbuntu\VM_Ubuntu_Welcome.jpg" title="Ubuntu What's New">
</p>
After a few moments you will be prompted login, or you will be brought straight to your Ubuntu desktop, depending on how you setup the auto logon option earlier.

On the initial login, you will see a what's new dialog, you can go ahead and click the green next button at the top, go through the screens and finally click on Done to dismiss.

<br/><br/><br/>
<p align="center">
<img width="500" height="301" src="images\videos\VBUbuntu\VM_Ubuntu_Screen_Resolution.jpg" title="Set Screen Resolution">
</p>
At this point you will probably want to set the Ubuntu VM's screen resolution to a more usable size.

To do this, click on the apps menu in the bottom left of the screen, then click on the setting icon (gear and wrench), then scroll down in the menu that appears and select Devices.

The first entry in this menu is Displays, and over on the right you can choose a new resolution.

If your initial VM window is very small like mine, you will need to double click on the title bar of the screen resolution window to free it, and you can drag it over to the left to access the apply button.

Click on apply, and then click on Keep Changes if the screen resolution you chose is acceptable.

Now you should have a more usable screen area to work with.

<br/><br/><br/>
<p align="center">
<img width="500" height="173" src="images\videos\VBUbuntu\Software_Updater.jpg" title="Software Updater">
</p>
If your host is connected to the Internet, your VM will also have a Internet connection at this time, and by now you will likely see a Software Updater prompt similar to the one shown above.

This is offering to Update your Ubuntu installation with any software patches released since the version on the ISO image was released. It is probably a good idea to allow these updates, so click on Install Now.

The process will collapse the window, but it can be reopened by clicking on the "A" icon  over on the right, and then clicking on details to expand the window. Depending on your connection, this can take a few minutes.

It is probably best to allow this update to complete before moving on. You will be prompted to restart once the updates have completed.
<br/><br/>

[Back to Top](#top)
<br/><br/>

## Installing Guest Additions
<br/>

The next thing we want to do is to install the Guest Additions CD.

Guest Additions bring additional functionality to our VM with some of the main features listed below:<br/><br/>
- Shared folders: As its name implies, this feature allows you to share folders between the host and the guest systems. You configure VirtualBox to use a specified directory on the host computer to act as a shared folder, and VB will make the directory appear to the guest operating system as it were an network share.
- Better mouse pointer integration: You no longer need to press any key to “free” the cursor from the Guest OS.
- Shared Clipboard: You can share data between the guest and the host operating systems using the clipboard.
- Drag and Drop: You are able to drag and drop files between the host and the guest OS.
- Improved video drivers: The custom video drivers that are installed with Guest Additions provide you with additional high and non-standard video modes, as well as improved video performance. It also allows you to resize the virtual machine’s window. If you have a 4K monitor, these drivers will resolve most tissues you may have had with video scaling.
- Time synchronization: The guest system's time is synchronized the time with that of the host machine regularly.

For a complete list, refer to the VirtualBox official documentation, available at: [https://www.virtualbox.org/manual/ch04.html](https://www.virtualbox.org/manual/ch04.html)
<br/><br/>

In order to install guest additions on Ubuntu, we will first need to install the gcc compiler.

<br/><br/><br/>
<p align="center">
<img width="500" height="311" src="images\videos\VBUbuntu\Terminal.jpg" title="Terminal">
</p>
To do this, first open up the Terminal by pressing the Ctrl+Alt+T shortcut keys at the same time, or go through the Apps menu and search for Terminal.
<br/><br/>

In the terminal windows type the following command and press enter:
```sh
sudo apt update
```
You will then be prompted to enter your password, go ahead and type in your password and press enter.

If you are new to Linux, the first word in the above command sudo stands for Super User Do, it allows us, as a regular user, to perform administrative commands from our user account.

Linux is more secure by default than Windows, so you need to use a privileged account to perform any actions that will change the system and sudo temporarily elevates our user account to Super User privilege's for the session.

This command is going to update the apt utility. APT is Ubuntu’s Advanced Packaging Tool, which we can use to update and install software packages.

By running the update we are updating the APT package index which is a list of packages that are available within the repository.

Once the command completes, indicates by the prompt returning, we need to run another command to install the gcc compiler.
<br/><br/>

In the terminal window type the following command and press enter:
```sh
sudo apt install build-essential dkms linux-headers-generic
```
You will not need to enter your password this time, as Ubuntu will remember for the duration of the session.

After a few moments, you will be informed the changes will consume ~200 additional MB of disk space and do you want to continue? Press Y for yes and then press enter to continue the installation.

The install will take a minute or two and you will know it has completed when the command prompt returns.
<br/><br/>

When it is finished, you can confirm that the gcc compiler was successfully installed by typing the following in the terminal and pressing enter:
```sh
gcc --version
```
You should see now some test in the terminal with the gcc version information.

Type in exit and press enter to exit the terminal window.

<br/><br/><br/>
<p align="center">
<img width="500" height="332" src="images\videos\VBUbuntu\Insert_Guest_Additons_CD.jpg" title="Insert Guest Additions CD">
</p>
Go up to devices at the top of your VM Window and choose Insert Guest Additions CD.

<br/><br/><br/>
<p align="center">
<img width="500" height="136" src="images\videos\VBUbuntu\Auto_Run.jpg" title="Auto Run Software">
</p>
After a moment or two, you should get a prompt as shown in the image above.

When we virtually inserted the Guest Additions CD , just like inserting a physical CD, Ubuntu executes any autorun software on the CD.

Go ahead and click on Run to start the Guest Additions installation.

<br/><br/><br/>
<p align="center">
<img width="500" height="301" src="images\videos\VBUbuntu\Authenticate.jpg" title="Auto Run Software">
</p>
You will then be prompted for your user account's password, go ahead and enter it and click on Authenticate.

<br/><br/><br/>
<p align="center">
<img width="500" height="335" src="images\videos\VBUbuntu\Reboot.jpg" title="Reboot">
</p>
When the installation has completed, your screen should appear similar to the one above.

Press Enter to close the window and then you need to restart Ubuntu.

Once the system has rebooted we can move on to configuring Shared Folders.
<br/><br/>

[Back to Top](#top)
<br/><br/>

## Create a Shared Folder
<br/><br/><br/>
<p align="center">
<img width="500" height="292" src="images\videos\VBUbuntu\Shared_Folders.jpg" title="Shared Folders">
</p>
Go up to the VM window and click on Devices->Shared Folders->Shared Folder Settings

<br/><br/><br/>
<p align="center">
<img width="500" height="248" src="images\videos\VBUbuntu\Shared_Folder_New.jpg" title="Shared Folders">
</p>
In the Shared Folders window, click the folder with the green arrow over on the right.

<br/><br/><br/>
<p align="center">
<img width="300" height="266" src="images\videos\VBUbuntu\Add_Share.jpg" title="Add Share">
</p>
In the new 'Add Share' window that appears, click the dropdown arrow in Folder Path, then click on other.

<br/><br/><br/>
<p align="center">
<img width="500" height="277" src="images\videos\VBUbuntu\Select_Folder.jpg" title="Select Folder">
</p>
Navigate to a folder on your host system that you want to share with the guest, select it and then click on Select Folder. In my example I am sharing a new folder I created named: Ubuntu_VM_Shared.

<br/><br/><br/>
<p align="center">
<img width="500" height="410" src="images\videos\VBUbuntu\Shared_Folders2.jpg" title="Shared Folders">
</p>
Check the Auto-mount and Make Permanent checkbox's to enable this share to be automatically mounted whenever the VM restarts. You can leave Read-only unchecked and Mount point can be left blank.

Click on Ok to exit the Add Share dialog, then click on Ok to exit the Shared Folders window.

<br/><br/><br/>
<p align="center">
<img width="300" height="416" src="images\videos\VBUbuntu\Shared_Folder_Icon.jpg" title="New Shared Folders Icon">
</p>
Notice now you should have a new shared folder icon on your desktop with a name like: sf_Ubuntu_VM_Shared.

We now need to add our user account to the vboxsf group that VirtualBox created when we first installed Ubuntu.

To do this open up the terminal, you can use the start menu or the Ctrl-Alt-T shortcut.

Type in: sudo adduser [username] vboxsf
```sh
sudo adduser dev vboxsf
```
My username is dev, so substitute your own username here. Press enter, and you will need to provide your password again since this is a new terminal session.

<br/><br/><br/>
<p align="center">
<img width="500" height="157" src="images\videos\VBUbuntu\Add_User.jpg" title="Add User to vboxsf Group">
</p>

You should see some message to the effect you were added to the group. To verify this type:
```sh
id dev
```
again using your own username instead of dev. You should now see the groups your username belongs to, and we can see vboxsf is now one of them, as shown in the above image.

<br/><br/><br/>
<p align="center">
<img width="500" height="330" src="images\videos\VBUbuntu\Drag_Drop_Clipboard.jpg" title="Clipboard - Drag and Drop">
</p>

We can also enable drag and drop to allow dragging and dropping of files from the host to the guest OS.

We have three options, Host to Guest, Guest to Host, and Bi-directional. They work as their names suggest, for instance host to guest you can drag and drop a file from the host computer to the guest OS, but not the other way around. The same with guest to host but in reverse, and finally bidirectional which enables drag and drop in both directions.

Under devices we can also setup clipboard sharing with the same choices.
<br/><br/>

[Back to Top](#top)
<br/><br/>

## Create an Initial Snapshot Image

<br/><br/><br/>
<p align="center">
<img width="300" height="244" src="images\videos\VBUbuntu\Take_Snapshot.jpg" title="Take Snapshot">
</p>

Ok, now that we have our installation setup with the basics, at least for the VM functionality, we can take a snapshot of our initial image.

To do that we simply go up to the VM windows and select Machine and click on take Snapshot.

<br/><br/><br/>
<p align="center">
<img width="500" height="329" src="images\videos\VBUbuntu\Take_Snapshot_Save.jpg" title="Snapshot Description and Save">
</p>

Give it a name and description if you wish, I am just going to call it initial snapshot, then click on OK.

The VM will automatically write the current state of the machine to disk and we can restore to this point in the future if we wish.

To restore the image to when the snapshot was taken, the Virtual Machine must first be powered off.

<br/><br/><br/>
<p align="center">
<img width="500" height="308" src="images\videos\VBUbuntu\Snapshot_Menu.jpg" title="Snapshot Menu">
</p>

Once it is powered down, go into the VirtualBox Manager, select the VM you wish to restore, and left click on the hamburger menu (3 lines) to the right of the VM's name.

You will see a menu with 3 selections: Details, Snapshots, and Logs. Select the Snapshot item to open the Snapshots interface.

<br/><br/><br/>
<p align="center">
<img width="500" height="296" src="images\videos\VBUbuntu\Restore_Snapshot.jpg" title="Restore Snapshot">
</p>

Near the top of the Snapshot window that opens, you will see the Initial Snapshot image you save earlier. Notice also that just underneath it will be the current state of the machine.

To restore the VM to the Initial Image Snapshot, highlight the Initial Image name as shown by \#1 above.

Then click on the Restore button along the top of the windows as shown by \#2 above.

Notice, there is a checkbox allowing you to take another snapshot of the current image if you so choose. This can be useful if its been awhile since the snapshot image you are restoring to was taken, as you can "revert your revert" if needed.

Make your selection and then click on Restore to finalize the image restoration process.

Depending on how much was changed the restoration process usually completes almost immediately.

Once it has finished you can then restart the Virtual Machine with your image restored back at the point the snapshot was created.

<br/><br/><br/>
<p align="center">
<img width="250" height="134" src="images\videos\VBUbuntu\Restore_Dialog.jpg" title="Restore Dialog">
</p>

As the machine restarts, you will see a brief dialog indicating that the image is being restored from the snapshot image.

Once the VM is back online, you should notice it has been reverted back to the point you created the snapshot.




<br/><br/>
