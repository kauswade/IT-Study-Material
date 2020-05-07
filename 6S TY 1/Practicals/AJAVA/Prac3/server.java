class server
{
	public static void main(String args[]) throws Exception
	{
		DatagramSocket ServerSocket = new DatagramSocket(9816);
		byte[] recieveata = new byte[1024];
		byte sendData = new byte[1024];
		while(true)
		{
			DatagramPacket receivePacket = new DatagramPacket(receiveData,receiveData.length);
			ServerSocket.receive(receivePacket);
			String sentence = new String(receivePacket.getData());
			InetAddress Ipaddress = receive
		}
	}
}